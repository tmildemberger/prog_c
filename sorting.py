import time

nums = []
with open("nums.txt", "r") as fh:
    msgs = fh.readlines()
    for msg in msgs:
        nums.append(int(msg))

time_1 = time.clock()
nums.sort()
print(time.clock()-time_1)
