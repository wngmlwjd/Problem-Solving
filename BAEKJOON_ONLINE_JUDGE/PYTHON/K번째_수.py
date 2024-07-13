import sys

input = sys.stdin.readline

N, K = map(int, input().split())
num = sorted(list(map(int, input().split())))

print(num[K - 1])