import sys

input = sys.stdin.readline

name = list(input().strip() for _ in range(5))

output = False
for i in range(5):
    if "FBI" in name[i]:
        print(i + 1, end=' ')
        output = True

if not output:
    print("HE GOT AWAY!")