MOD = int(1e9) + 7
n = int(input())
a = [int(i) for i in input().split()]
ans = 0
for i in range(n - 1):
    for j in range(i + 1, n):
        print(a[i], a[j], a[i] < a[j])
        if a[i] < a[j]:
            ans += (a[i] * a[j]) % MOD
print(ans)
