d, g = [int(i) for i in input().split()]
p, c = [0] * d, [0] * d
for i in range(d):
    p[i], c[i] = [int(j) for j in input().split()]

ans = float('inf')
for bit in range(1 << d):
    tot = 0
    num = 0
    for i in range(d):
        if bit >> i & 1:
            tot += c[i] + p[i]*100*(i + 1)
            num += p[i]
    if tot >= g:
        ans = min(ans, num)
    else:
        for i in reversed(range(d)):
            if bit >> i & 1:
                continue
            for j in range(p[i]):
                if tot >= g:
                    break
                tot += 100 * (i + 1)
                num += 1
        ans = min(ans, num)
