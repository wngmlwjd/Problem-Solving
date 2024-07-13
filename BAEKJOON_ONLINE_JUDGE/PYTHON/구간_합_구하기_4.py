import sys

input = sys.stdin.readline

N, T = map(int, input().split())
num = list(map(int, input().split()))

sum = [0]
for i in range(N):
    sum.append(sum[i] + num[i])

for _ in range(T):
    a, b = map(int, input().split())
    
    print(sum[b] - sum[a - 1])