import os
import subprocess
import json
from tqdm import tqdm
from openai import OpenAI
import re

def extract_code_from_llm_output(text: str) -> str:
    match = re.search(r"```[a-zA-Z]*\n(.*?)```", text, re.DOTALL)
    if match:
        return match.group(1).strip()
    return text.strip()

def call_llm(llm_model: str, prompt: str) -> str:
    try:
        client = OpenAI(
            base_url=XXXXXXXXXXXXXXX,  
            api_key = XXXXXXXXXXXXXXX
        )

        response = client.chat.completions.create(
            model=llm_model,
            messages=[{"role": "user", "content": prompt}],
            timeout=600
        )
        return response.choices[0].message.content.strip()
    except Exception as e:
        print(f"❌ LLM call failed: {e}")
        return ""


def convert_cpp_to_c_function(cpp_code: str) -> str:
    llm_model = "gpt-4o"
    prompt = (
        "Convert the following C++ function into standard C (C99).\n"
        "Constraints:\n"
        "Do NOT use any external headers. Avoid including any #include statements.\n"
        "If any standard library functions are required (e.g., strlen, memcpy, abs), reimplement them manually using plain C.\n"
        "Replace std::vector or std::string with pointer and explicit length.\n"
        "Use only primitive C types like int or unsigned int (not size_t).\n"
        "Avoid any C++ STL. No classes, templates, streams.\n"
        "Return only the valid C function.\n\n"
        f"{cpp_code}"
    )
    return extract_code_from_llm_output(call_llm(llm_model, prompt))

def convert_cpp_to_c_test(cpp_test: str, func_name: str) -> str:
    llm_model = "gpt-4o"
    prompt = (
        f"Convert this C++ test into standard C (C99) test.\n"
        f"Assume function `{func_name}` uses pointer-based arrays.\n"
        "Use only primitive C types like int or unsigned int (not size_t).\n"
        "Make sure all the required header files are contained.\n"
        "Use assert().\n"
        f"Return only the main function, do not implement the function `{func_name}` again.\n\n"
        f"{cpp_test}"
    )
    return extract_code_from_llm_output(call_llm(llm_model, prompt))

def write_and_test_c_code(func_code: str, test_code: str, task_id: str, out_dir: str) -> tuple[bool, str]:
    os.makedirs(out_dir, exist_ok=True)
    func_path = os.path.join(out_dir, f"{task_id}_func.c")
    test_path = os.path.join(out_dir, f"{task_id}_test.c")
    exe_path = os.path.join(out_dir, f"{task_id}_run.out")

    with open(func_path, "w", encoding="utf-8") as f:
        f.write(func_code)
    with open(test_path, "w", encoding="utf-8") as f:
        f.write(test_code)

    try:
        subprocess.run(
            ["gcc", func_path, test_path, "-o", exe_path],
            check=True,
            stdout=subprocess.PIPE,
            stderr=subprocess.PIPE
        )
    except subprocess.CalledProcessError as e:
        return False, f"[Compile Error]\n{e.stderr.decode('utf-8', errors='ignore')}"

    try:
        result = subprocess.run(
            [exe_path],
            stdout=subprocess.PIPE,
            stderr=subprocess.PIPE,
            timeout=3
        )
        if result.returncode != 0:
            return False, f"[Runtime Error] Return Code {result.returncode}\n{result.stderr.decode('utf-8', errors='ignore')}"
        return True, ""
    except subprocess.TimeoutExpired:
        return False, "[Timeout] Program did not finish within limit"
    except Exception as e:
        return False, f"[Execution Error] {str(e)}"

def is_forbidden(c_code: str) -> bool:

    if not c_code:
        return False
    forbidden_patterns = [
        r"\bmalloc\s*\(",
        r"\bcalloc\s*\(",
        r"\brealloc\s*\(",
        r"\bfree\s*\(",
        r"\bsystem\s*\(",
        r"\bfork\s*\(",
        r"\bexec[a-z]*\s*\(",
        r"\bsleep\s*\(",
        r"\bfloat\b",
        r"\bdouble\b",
        r"\blong\s+double\b",
    ]
    for p in forbidden_patterns:
        if re.search(p, c_code):
            return True
    return False

def convert_and_validate(input_path: str, output_jsonl: str, error_jsonl: str, code_out_dir: str, limit: int | None = None):
    with open(input_path, "r", encoding="utf-8") as f:
        lines = f.readlines()

    valid = []
    failed = []

    for i, line in enumerate(tqdm(lines, desc="Processing")):
        if limit and i >= limit:
            break

        item = json.loads(line)
        task_id = item.get("task_id", f"task_{i}").replace("CPP/", "")
        cpp_func = item.get("declaration", "") + item.get("canonical_solution", "")
        cpp_test = item.get("test", "")

        had_solved_flag = False
        try:
            with open("add.jsonl", "r", encoding="utf-8") as fsolved:
                for sline in fsolved:
                    try:
                        solve_item = json.loads(sline.strip())
                    except json.JSONDecodeError:
                        continue
                    pass_id = solve_item.get("task_id")
                    if task_id == pass_id:
                        had_solved_flag = True
                        break
        except FileNotFoundError:
            pass

        if had_solved_flag:
            print(f"Task {task_id} has already been converted, skipping")
            continue

        llm_model = "gpt-4o"
        decl_text = item.get("declaration", "")
        prompt_header = (
            "Convert the function header to C language function header "
            "from the following C++ declaration code:\n"
            f"{decl_text}\n"
            "Only return the function header without any other text."
        )
        func_name = call_llm(llm_model, prompt_header)
        print(func_name)

        try:
            c_func = convert_cpp_to_c_function(cpp_func)
            c_test = convert_cpp_to_c_test(cpp_test, func_name)

            success, error_info = write_and_test_c_code(c_func, c_test, task_id, code_out_dir)
            if not success:
                failed.append({
                    "task_id": task_id,
                    "error_info": error_info
                })
                continue

            if is_forbidden(c_func) or is_forbidden(c_test):
                failed.append({
                    "task_id": task_id,
                    "error_info": "forbidden features: malloc/float/system call detected"
                })
                continue

            valid.append({
                "task_id": task_id,
                "c_code": c_func,
                "c_test": c_test
            })

        except Exception as e:
            failed.append({
                "task_id": task_id,
                "error_info": f"exception: {str(e)}"
            })

    with open(output_jsonl, "w", encoding="utf-8") as f:
        for rec in valid:
            json.dump(rec, f, ensure_ascii=False)
            f.write("\n")

    with open(error_jsonl, "w", encoding="utf-8") as f:
        for rec in failed:
            json.dump(rec, f, ensure_ascii=False)
            f.write("\n")

    print(f"✅ Passed: {len(valid)} | ❌ Failed: {len(failed)}")

if __name__ == "__main__":
    INPUT_JSONL = "data/humaneval.jsonl"
    OUTPUT_JSONL = "c_humaneval.jsonl"
    convert_and_validate(
        input_path=INPUT_JSONL,
        output_jsonl=OUTPUT_JSONL,
        error_jsonl="failed_convert_cases.jsonl",
        code_out_dir="generated_c_code"
    )
