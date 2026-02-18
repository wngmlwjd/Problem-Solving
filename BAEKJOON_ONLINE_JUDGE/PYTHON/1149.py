N = int(input())

cost = [list(map(int, input().split())) for _ in range(N)]

dp = [[0, 0, 0] for _ in range(N)]
for i in range(3):
    dp[0][i] = cost[0][i]
    
for i in range(1, len(cost)):
    dp[i][0] = (dp[i - 1][1] if dp[i - 1][1] < dp[i - 1][2] else dp[i - 1][2]) + cost[i][0]
    dp[i][1] = (dp[i - 1][0] if dp[i - 1][0] < dp[i - 1][2] else dp[i - 1][2]) + cost[i][1]
    dp[i][2] = (dp[i - 1][1] if dp[i - 1][1] < dp[i - 1][0] else dp[i - 1][0]) + cost[i][2]
    
print(min(dp[N - 1]))