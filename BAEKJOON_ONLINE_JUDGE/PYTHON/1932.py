N = int(input())
arr = [list(map(int, input().split())) for _ in range(N)]

dp = [[0 for _ in range(N)] for _ in range(N)]
dp[0] = arr[0]
for i in range(1, N):
    for j in range(i + 1):
        if j == 0:
            dp[i][j] = dp[i - 1][j] + arr[i][j]
        elif j == i:
            dp[i][j] = dp[i - 1][j - 1] + arr[i][j]
        else:
            dp[i][j] = (dp[i - 1][j - 1] if dp[i - 1][j - 1] > dp[i - 1][j] else dp[i - 1][j]) + arr[i][j]

print(max(dp[N - 1]))