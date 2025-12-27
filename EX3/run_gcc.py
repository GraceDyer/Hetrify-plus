import os
import sys
import csv
import subprocess
from pathlib import Path

def run_gcc(root_dir: str, csv_path: str, gcc_bin: str = "gcc"):
    """
    Compile *_func_gen.c + *_test.c files under root_dir using gcc_bin.
    Store results in a CSV: (task_name, compile_pass, stdout_stderr).
    """

    rows = []

    for dirpath, _, filenames in os.walk(root_dir):
        func_files = [f for f in filenames if f.endswith("_func_gen.c")]
        test_files = [f for f in filenames if f.endswith("_test.c")]

        # Need both func + test
        if not func_files or not test_files:
            continue

        func_path = os.path.join(dirpath, func_files[0])
        test_path = os.path.join(dirpath, test_files[0])

        task_name = os.path.basename(dirpath)

        print("Compiling:", func_path, test_path)

        output_bin = os.path.join(dirpath, f"{task_name}.out")

        cmd = [
            gcc_bin,
            func_path,
            test_path,
            "-o",
            output_bin,
        ]

        # Capture output
        result = subprocess.run(
            cmd,
            stdout=subprocess.PIPE,
            stderr=subprocess.STDOUT,
            text=True,
            check=False
        )

        compile_pass = (result.returncode == 0)
        stdout_stderr = result.stdout.replace("\n", "\\n")

        rows.append([
            task_name,
            compile_pass,
            stdout_stderr,
        ])

    # Write to CSV
    with open(csv_path, "w", newline="", encoding="utf-8") as f:
        writer = csv.writer(f)
        writer.writerow([
            "task_name",
            "compile_pass",
            "stdout_stderr",
        ])
        writer.writerows(rows)

    print("\nDone. Results saved to:", csv_path)


if __name__ == "__main__":
    if len(sys.argv) != 3:
        print("Usage: python run_gcc.py <root_dir> <csv_path>")
        sys.exit(1)

    root_dir = sys.argv[1]
    csv_path = sys.argv[2]

    run_gcc(root_dir, csv_path)
import os
import sys
import csv
import subprocess
from pathlib import Path

def run_gcc(root_dir: str, csv_path: str, gcc_bin: str = "gcc"):
    """
    Compile *_func_gen.c + *_test.c files under root_dir using gcc_bin.
    Store results in a CSV: (task_name, compile_pass, stdout_stderr).
    """

    rows = []

    for dirpath, _, filenames in os.walk(root_dir):
        func_files = [f for f in filenames if f.endswith("_func_gen.c")]
        test_files = [f for f in filenames if f.endswith("_test.c")]

        # Need both func + test
        if not func_files or not test_files:
            continue

        func_path = os.path.join(dirpath, func_files[0])
        test_path = os.path.join(dirpath, test_files[0])

        task_name = os.path.basename(dirpath)

        print("Compiling:", func_path, test_path)

        output_bin = os.path.join(dirpath, f"{task_name}.out")

        cmd = [
            gcc_bin,
            func_path,
            test_path,
            "-o",
            output_bin,
        ]

        # Capture output
        result = subprocess.run(
            cmd,
            stdout=subprocess.PIPE,
            stderr=subprocess.STDOUT,
            text=True,
            check=False
        )

        compile_pass = (result.returncode == 0)
        stdout_stderr = result.stdout.replace("\n", "\\n")

        rows.append([
            task_name,
            compile_pass,
            stdout_stderr,
        ])

    # Write to CSV
    with open(csv_path, "w", newline="", encoding="utf-8") as f:
        writer = csv.writer(f)
        writer.writerow([
            "task_name",
            "compile_pass",
            "stdout_stderr",
        ])
        writer.writerows(rows)

    print("\nDone. Results saved to:", csv_path)


if __name__ == "__main__":
    if len(sys.argv) != 3:
        print("Usage: python run_gcc.py <root_dir> <csv_path>")
        sys.exit(1)

    root_dir = sys.argv[1]
    csv_path = sys.argv[2]

    run_gcc(root_dir, csv_path)
