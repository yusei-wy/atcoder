n = int(input())
a = [int(i) for i in input().split()]
x = 0
y = sum(a)
ans = 10e9
for i in range(n - 1):
    x += a[i]
    y -= a[i]
    ans = min(ans, abs(x - y))
print(ans)
