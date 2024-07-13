import sys

input = sys.stdin.readline

N = int(input())
num = sorted(list(set(map(int, input().split()))))

for i in num:
    print(i, end=" ")