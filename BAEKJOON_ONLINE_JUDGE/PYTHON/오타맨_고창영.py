import sys

input = sys.stdin.readline

T = int(input())

for _ in range(T):
    n, string = input().strip().split()

    print(string[:int(n) - 1] + string[int(n):])