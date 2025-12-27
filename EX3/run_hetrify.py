import os
import shutil
import subprocess
import sys
from pathlib import Path


def copy_root_dir(src_root: str, dst_root: str):
    """
    Copy the entire src_root directory to dst_root
    """
    src_root = os.path.abspath(src_root)
    dst_root = os.path.abspath(dst_root)

    if os.path.exists(dst_root):
        raise RuntimeError(f"Destination directory already exists: {dst_root}")

    print(f"Copying root_dir:")
    print(f"  from: {src_root}")
    print(f"  to  : {dst_root}")

    shutil.copytree(src_root, dst_root)


def run_hetrify(root_dir: str, exec_path: str, log_dir: str):
    """
    Run exec_path on every *_func.c file under root_dir
    and log outputs under log_dir
    """
    os.makedirs(log_dir, exist_ok=True)
    failed = []

    for dirpath, _, filenames in os.walk(root_dir):
        for filename in filenames:
            if not filename.endswith("_func.c"):
                continue

            full_path = os.path.join(dirpath, filename)
            task_name = os.path.basename(os.path.dirname(full_path))
            log_path = os.path.join(log_dir, f"{task_name}.log")

            print("Running:", full_path)

            with open(log_path, "w", encoding="utf8") as log_file:
                result = subprocess.run(
                    [exec_path, full_path],
                    stdout=log_file,
                    stderr=subprocess.STDOUT,
                    text=True,
                    check=False,
                )

            if result.returncode != 0:
                failed.append(task_name)

    print()
    if failed:
        print("Failed tasks:")
        for x in failed:
            print(x)
    else:
        print("All tasks succeeded")


if __name__ == "__main__":
    if len(sys.argv) != 5:
        print(
            "Usage:\n"
            "  python run_hetrify.py <src_root_dir> <copied_root_dir> <exec_path> <log_dir>"
        )
        sys.exit(1)

    src_root_dir = sys.argv[1]
    copied_root_dir = sys.argv[2]
    exec_path = sys.argv[3]
    log_dir = sys.argv[4]

    # Step 1: copy root directory
    copy_root_dir(src_root_dir, copied_root_dir)

    # Step 2: run hetrify on copied directory
    run_hetrify(copied_root_dir, exec_path, log_dir)
