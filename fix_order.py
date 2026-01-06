import glob
from collections import OrderedDict
import subprocess

PROBLEM_DIR = "problems/"
RESULT_DIR = "result/problems/"

class Problem:
    def __init__(source_file, suffix, number):
        self.source_file = source_file
        self.suffix = suffix
        self.number = number

if __name__ == "__main__":
    moves = OrderedDict()
    targets = []
    with open("order") as f:
        for i, file in enumerate(f):
            move_target = f"problems/{i:03}_{file.strip()}"
            result_target = f"result/{move_target[:-2]}"
            match_source = f"problems/*{file.strip()}"
            source_files = glob.glob(match_source)
            match_stdout = f"result/problems/*{file.strip()[:-2]}"
            stdout_files = glob.glob(match_stdout)
            if len(source_files) == 1 and len(stdout_files) == 1:
                print(f"{file.strip()} - Source: {source_files[0]} - Target: {result_target} - stdout: {stdout_files[0]}")
                subprocess.run(["git", "mv", source_files[0], move_target])
                subprocess.run(["git", "mv", stdout_files[0], result_target])
            else:
                print(f"Wrong number of files found for file {move_target} (found {len(source_files)} source files, and {len(stdout_files)} output files)")
                
