import sys

input = sys.stdin.readline

N, M = map(int, input().split())
num = [list(map(int, input().split())) for _ in range(N)]
dp = [[0 for _ in range(M + 1)] for _ in range(N + 1)]

for i in range(1, N + 1):
    for j in range(1, M + 1):
        dp[i][j] = dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1] + num[i - 1][j - 1]

T = int(input())
for _ in range(T):
    a, b, c, d = map(int, input().split())

    print(dp[c][d] - dp[c][b - 1] - dp[a - 1][d] + dp[a - 1][b - 1])