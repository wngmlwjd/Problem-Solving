import sys

input = sys.stdin.readline

N = int(input())

if N == 1:
    print("*")
else:
    for i in range(1, N + 1):
        if N % 2 == 0:
            print("* " * (N // 2))
        else:
            print("* " * (N // 2 + 1))
        print(" *" * (N // 2))