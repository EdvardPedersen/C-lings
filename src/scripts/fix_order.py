import subprocess
import sys

IN_PROBLEM_DIR = ""
OUT_PROBLEM_DIR = ""


if __name__ == "__main__":
    # Add the possibility to give problem dir and result dir as arguments.
    if len(sys.argv) == 3:
        IN_PROBLEM_DIR = sys.argv[1] + "/" if sys.argv[1][-1] != "/" else ""
        OUT_PROBLEM_DIR = sys.argv[2] + "/" if sys.argv[2][-1] != "/" else ""
        print(IN_PROBLEM_DIR)
        print(OUT_PROBLEM_DIR)
    else:
        print("Not the correct number of arguments")
        exit(-1)

    with open("order") as f:
        for i, file in enumerate(f):
            problem_target = f"{OUT_PROBLEM_DIR}{i:03}_{file.strip()}"
            problem_src = f"{IN_PROBLEM_DIR}{file.strip()}"
            
            subprocess.run(["cp", problem_src, problem_target])


