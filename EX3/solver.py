#!/usr/bin/env python3
import sys
import os
import subprocess
import csv
import time
import re

if len(sys.argv) != 5:
    print(f"Usage: {sys.argv[0]} <dir> <output.csv> <unwind> <timeout>")
    print("  <timeout>: seconds (e.g. 3000 or 3000s)")
    sys.exit(1)

main_dir, output_csv, unwind_str, timeout_str = sys.argv[1], sys.argv[2], sys.argv[3], sys.argv[4]

# Validate and parse unwind
try:
    unwind = int(unwind_str)
except ValueError:
    print(f"Invalid unwind value: {unwind_str}")
    sys.exit(1)

# Validate and parse timeout
if timeout_str.endswith('s') and timeout_str[:-1].isdigit():
    timeout = int(timeout_str[:-1])
elif timeout_str.isdigit():
    timeout = int(timeout_str)
else:
    print(f"Invalid timeout format: {timeout_str}")
    sys.exit(1)

# Collect .c files
try:
    files = [f for f in os.listdir(main_dir) if f.endswith('.c')]
except FileNotFoundError:
    print(f"Error: directory '{main_dir}' not found.")
    sys.exit(1)

# Create trace output directory
trace_output_dir = f"{main_dir}_unwind{unwind}"
os.makedirs(trace_output_dir, exist_ok=True)

# Initialize CSV with header
with open(output_csv, 'w', newline='') as csvfile:
    writer = csv.writer(csvfile)
    writer.writerow(['Filename', 'Elapsed Time (s)', 'Max Memory (MB)', 'Result'])

# Process each file
for filename in files:
    path = os.path.join(main_dir, filename)
    start_time = time.time()
    try:
        res = subprocess.run(
            [
                '/usr/bin/time', '-v',
                'cbmc', path,
                '--unwind', str(unwind),
                '--no-built-in-assertions'
            ],
            capture_output=True,
            text=True,
            timeout=timeout
        )
        elapsed = time.time() - start_time
        rc = res.returncode
        if rc == 0:
            status = 'SUCCESSFUL'
        elif rc == 10:
            status = 'FAILED'
        else:
            status = f'ERROR_{rc}'

        # Extract max RSS
        match = re.search(r'Maximum resident set size \(kbytes\): (\d+)', res.stderr)
        max_rss_mb = int(match.group(1)) / 1024 if match else -1

        # Save trace
        trace_path = os.path.join(trace_output_dir, f"{filename}.trace.txt")
        with open(trace_path, 'w') as tf:
            tf.write("[stdout]\n" + res.stdout + "\n\n[stderr]\n" + res.stderr)

    except subprocess.TimeoutExpired:
        elapsed = time.time() - start_time
        status = 'TIMEOUT'
        max_rss_mb = -1
        trace_path = os.path.join(trace_output_dir, f"{filename}.trace.txt")
        with open(trace_path, 'w') as tf:
            tf.write(f"*** TIMEOUT after {timeout_str} ***\n")

    # Append to CSV
    with open(output_csv, 'a', newline='') as csvfile:
        writer = csv.writer(csvfile)
        writer.writerow([filename, f"{elapsed:.2f}", f"{max_rss_mb:.2f}", status])
        csvfile.flush()

    print(f"{filename}: {status} ({elapsed:.2f}s, {max_rss_mb:.2f}MB)")

print(f"Results saved to {output_csv}")
print(f"Traces saved to directory: {trace_output_dir}")
