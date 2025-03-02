MOD = 1000000007

n, m = [int(i) for i in input().split()]
oks = [True] * (n + 1)
for i in range(m):
    a = int(input())
    oks[a] = False

dp = [0] * (n + 1)
dp[0] = 1
# i=now, j=next
for i in range(n):
    for j in range(i+1, min(n, i + 2) + 1):
        if not oks[j]:
            continue
        dp[j] += dp[i]
        dp[j] %= MOD

print(dp[n])
