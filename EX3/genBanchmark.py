import os
import json
import re

def safe_unescape(s):
    if not isinstance(s, str):
        return ""
    s = s.replace("\\r\\n", "\n")
    s = s.replace("\\n", "\n")
    s = s.replace("\\t", "\t")
    s = s.replace("\\r", "\r")
    s = s.replace("\\\\", "\\")
    s = s.replace("\\\"", "\"")
    s = s.replace("\\'", "'")
    return s

def extract_id_num(task_id):
    """
    task_id is a pure number string
    """
    try:
        return int(task_id)
    except Exception:
        return None

def sanitize_name(s):
    return re.sub(r'[<>:"/\\|?*\x00-\x1F]', "_", s).strip()

def parse_jsonl(path):
    items = []
    with open(path, "r", encoding="utf8", errors="strict") as f:
        for line_no, line in enumerate(f, 1):
            line = line.strip()
            if not line:
                continue
            try:
                obj = json.loads(line)
                items.append(obj)
            except Exception:
                print(f"Line {line_no} parse failed, skip")
    return items

def ensure_code(code):
    code = code.strip()
    if not code:
        return ""
    if "\n" not in code and ";" not in code and "{" not in code:
        code = code.replace("\\n", "\n")
    return code

def write_text(path, text):
    with open(path, "w", encoding="utf8", errors="strict") as f:
        f.write(text)

def parse_json_to_c_files(jsonl_path, output_dir="parsed_tasks"):
    os.makedirs(output_dir, exist_ok=True)

    raw_items = parse_jsonl(jsonl_path)
    items = []

    for item in raw_items:
        task_id = item.get("task_id", "")
        num = extract_id_num(task_id)
        if num is None:
            print(f"Invalid task_id, skip: {task_id}")
            continue
        items.append((num, item))

    items.sort(key=lambda x: x[0])

    total = 0

    for num, item in items:
        task_id = item.get("task_id", "")

        c_code_raw = item.get("c_code", "")
        test_code_raw = item.get("c_test", "")   # fixed field name

        c_code = ensure_code(safe_unescape(c_code_raw))
        test_code = ensure_code(safe_unescape(test_code_raw))

        if not c_code or not test_code:
            print(f"task_id {task_id} missing c_code or c_test, skip")
            continue

        folder = os.path.join(output_dir, str(num))
        os.makedirs(folder, exist_ok=True)

        impl_path = os.path.join(folder, f"{num}_func.c")
        test_path = os.path.join(folder, f"{num}_test.c")

        write_text(impl_path, c_code.rstrip() + "\n")
        write_text(test_path, test_code.rstrip() + "\n")

        print(f"Done: {task_id} -> {folder}")
        total += 1

    print(f"Total generated {total} tasks")

if __name__ == "__main__":
    parse_json_to_c_files("c_humaneval+.jsonl", "CC_tasks")
