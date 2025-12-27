import os
import sys
import csv
import subprocess

def run_outputs(root_dir: str, csv_path: str):
    """
    Execute every *.out file under root_dir,
    store results in CSV:
    (task_name, run_pass, return_code, stdout_stderr)
    """
    rows = []

    for dirpath, _, filenames in os.walk(root_dir):
        for filename in filenames:
            if not filename.endswith(".out"):
                continue

            full_path = os.path.join(dirpath, filename)
            task_name = os.path.basename(dirpath)

            print("Running:", full_path)

            try:
                p = subprocess.run(
                    [full_path],
                    stdout=subprocess.PIPE,
                    stderr=subprocess.STDOUT,
                    text=True,
                    timeout=10
                )
                output = p.stdout
                returncode = p.returncode
            except Exception as e:
                output = f"Exception: {e}"
                returncode = -1

            out_lower = output.lower()

            # default pass
            run_pass = True

            # Conditions considered failure
            if returncode != 0:
                run_pass = False
            if "assert" in out_lower:
                run_pass = False
            if "segmentation fault" in out_lower or "segfault" in out_lower:
                run_pass = False

            rows.append([
                task_name,
                run_pass,
                returncode,
                output.replace("\n", "\\n")
            ])

    # Write CSV
    with open(csv_path, "w", newline="", encoding="utf-8") as f:
        writer = csv.writer(f)
        writer.writerow([
            "task_name",
            "run_pass",
            "return_code",
            "stdout_stderr"
        ])
        writer.writerows(rows)

    print("\nDone. Results saved to:", csv_path)


if __name__ == "__main__":
    if len(sys.argv) != 3:
        print("Usage: python run_outputs.py <root_dir> <csv_path>")
        sys.exit(1)

    root_dir = sys.argv[1]
    csv_path = sys.argv[2]

    run_outputs(root_dir, csv_path)
