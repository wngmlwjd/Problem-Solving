import sys

input = sys.stdin.readline

N = int(input())

for i in range(N):
    print(str(i + 1) + ". " + input(), end='')