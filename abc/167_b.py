a, b, c, k = [int(i) for i in input().split()]
ans = 0
if a > k:
    ans += k
    print(ans)
    exit()

ans += a
k -= a
if k < 0:
    print(ans)
    exit()

k -= b
if k < 0:
    print(ans)
    exit()

ans += (-1*k)
print(ans)
