n = int(input())
S = [input() for _ in range(n)]
d = {}
m = 0
for s in S:
    if s in d:
        d[s] += 1
    else:
        d[s] = 1
    m = max(m, d[s])

sd = sorted(d.items(), key=lambda x: x[1], reverse=True)
ans = []
for k, v in sd:
    if v != m:
        break
    ans.append(k)

for a in sorted(ans):
    print(a)
