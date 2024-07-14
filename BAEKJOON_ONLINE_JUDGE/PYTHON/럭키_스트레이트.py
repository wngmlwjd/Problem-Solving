import sys

input = sys.stdin.readline

string = input().strip()

a, b = 0, 0
for i in range(len(string) // 2):
    a += int(string[i])
    b += int(string[len(string) // 2 + i])
    
print("LUCKY") if a == b else print("READY")