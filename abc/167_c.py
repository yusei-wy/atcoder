n, m, x = [int(i) for i in input().split()]
a = []
c = []
for i in range(n):
    inp = [int(i) for i in input().split()]
    c.append(inp[0])
    a.append(inp[1:])

ok = False
ans = float('inf')
for bit in range(1 << n):
    o = [0] * m
    tot = 0
    for i in range(n):
        if bit >> i & 1:
            tot += c[i]
            for j in range(m):
                o[j] += a[i][j]

    allOk = True
    for i in o:
        if i < x:
            allOk = False
            break
    if allOk:
        ok = True
        ans = min(ans, tot)

if ok:
    print(ans)
else:
    print(-1)
