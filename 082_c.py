n = int(input())
a = [int(i) for i in input().split()]
d = {}
for i in a:
    if i in d:
        d[i] += 1
    else:
        d[i] = 1

ans = 0
for k, v in d.items():
    if (v < k):
        ans += v
    else:
        ans += v - k
print(ans)
