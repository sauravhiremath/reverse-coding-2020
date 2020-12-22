import subprocess
import sys
inp = "600000\n"
sys.stdout = open("dump.json", "w")
for i in range(1, 600000):
    inp += str(i) + "\n"
res = subprocess.run(["./q7"], capture_output=True, input=inp.encode('utf-8'))
print(res.stdout)
sys.stdout.close()