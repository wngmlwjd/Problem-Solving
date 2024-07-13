import sys

input = sys.stdin.readline

N = int(input())
string = list(input().strip() for _ in range(N))

output = ""
for i in range(len(string[0])):
    n = string[0][i]
    for j in range(1, N):
        if string[j - 1][i] != string[j][i]:
            n = "?"
            break
    output += n

print(output)