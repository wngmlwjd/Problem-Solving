import sys

input = sys.stdin.readline

N = int(input())

print(*sorted(list(int(input()) for _ in range(N))), sep="\n")