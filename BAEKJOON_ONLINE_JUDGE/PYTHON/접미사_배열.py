import sys

input = sys.stdin.readline

string = input().strip()
output = []

for i in range(len(string)):
    output.append(string[i:])
    
output = sorted(output)

for i in output:
    print(i)