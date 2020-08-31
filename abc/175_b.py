from itertools import combinations
n = int(input())
l = [i for i in input().split()]
ans = 0
for v in combinations(l, 3):
    s = set()
    for i in v:
        s.add(i)
    print(s)
    if len(s) == 3:
        ans += 1
print(ans)
