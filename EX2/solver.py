#!/usr/bin/env python3
import os
import sys
import subprocess
import time
import csv
import re

def validate_args():
    if len(sys.argv) != 5:
        print(f"Usage: {sys.argv[0]} <root_dir> <output.csv> <unwind> <timeout>")
        sys.exit(1)

    root_dir, csv_path, unwind_str, timeout_str = sys.argv[1:]
    
    if not os.path.isdir(root_dir):
        print(f"Error: Directory '{root_dir}' not found.")
        sys.exit(1)
    
    try:
        unwind = int(unwind_str)
        timeout = int(timeout_str.rstrip('s'))
    except ValueError:
        print("Invalid unwind or timeout value.")
        sys.exit(1)

    return root_dir.rstrip('/'), csv_path, unwind, timeout

def extract_max_rss(stderr_text):
    match = re.search(r'Maximum resident set size \(kbytes\): (\d+)', stderr_text)
    return int(match.group(1)) / 1024 if match else -1

def main():
    root_dir, csv_path, unwind, timeout = validate_args()
    trace_dir = f"{root_dir}_unwind{unwind}"
    os.makedirs(trace_dir, exist_ok=True)

    # Initialize CSV
    with open(csv_path, 'w', newline='') as f:
        writer = csv.writer(f)
        writer.writerow(['Subdir', 'Elapsed Time (s)', 'Max Memory (MB)', 'Result'])

    # Process each subdirectory under root_dir
    for sub in sorted(os.listdir(root_dir)):
        sub_path = os.path.join(root_dir, sub)
        if not os.path.isdir(sub_path):
            continue

        # Collect *.c files in this subdir
        c_files = [os.path.join(sub_path, f) for f in os.listdir(sub_path) if f.endswith('.c')]
        if not c_files:
            continue

        print(f"Running CBMC on {sub}/ with {len(c_files)} .c files...")

        start = time.time()
        trace_file = os.path.join(trace_dir, f"{sub}.trace.txt")

        try:
            result = subprocess.run(
                ['/usr/bin/time', '-v', 'cbmc','--unwind', str(unwind), '--no-built-in-assertions','--object-bits','16'] + c_files,
                capture_output=True,
                text=True,
                timeout=timeout
            )
            elapsed = time.time() - start
            status = 'SUCCESSFUL' if result.returncode == 0 else ('FAILED' if result.returncode == 10 else f'ERROR_{result.returncode}')
            max_rss = extract_max_rss(result.stderr)

            with open(trace_file, 'w') as tf:
                tf.write("[stdout]\n" + result.stdout + "\n\n[stderr]\n" + result.stderr)

        except subprocess.TimeoutExpired:
            elapsed = time.time() - start
            status = 'TIMEOUT'
            max_rss = -1
            with open(trace_file, 'w') as tf:
                tf.write(f"*** TIMEOUT after {timeout}s ***\n")

        # Append CSV row
        with open(csv_path, 'a', newline='') as f:
            writer = csv.writer(f)
            writer.writerow([sub, f"{elapsed:.2f}", f"{max_rss:.2f}", status])

        print(f"{sub}: {status} ({elapsed:.2f}s, {max_rss:.2f}MB)")

    print(f"\n✅ CSV saved to {csv_path}")
    print(f"🗂️ Trace logs saved to {trace_dir}")

if __name__ == '__main__':
    main()
