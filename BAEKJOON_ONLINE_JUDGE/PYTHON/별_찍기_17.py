import sys

input = sys.stdin.readline

N = int(input())

for i in range(1, N + 1):
    if i == 1:
        print(" " * (N - i) + "*")
    elif i == N:
        print("*" * (i * 2 - 1))
    else:
        print(" " * (N - i) + "*" + " " * ((i - 1) * 2 - 1) + "*")