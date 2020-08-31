n = int(input())
a = [int(i) for i in input().split()]
dp = [float('inf')] * n
dp[0] = 0
for i in range(1, n):
    dp[i] = min(dp[i], dp[i - 1] + abs(a[i] - a[i - 1]))
    if i > 1:
        dp[i] = min(dp[i], dp[i - 2] + abs(a[i] - a[i - 2]))
print(dp[n-1])
