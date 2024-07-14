import sys

input = sys.stdin.readline

T = int(input())

for _ in range(T):
    N = int(input())

    print("even") if N % 2 == 0 else print("odd")