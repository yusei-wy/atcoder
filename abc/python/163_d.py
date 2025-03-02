n, k = [int(i) for i in input().split()]
mod = 10**9 + 7
ans = 0

for i in range(k, n + 2):
    first = i * (i - 1) / 2
    final = (n * 2 - i + 1) * i / 2
    add = final - first + 1
    ans = (ans + add) % mod

print(int(ans))
