from collections import defaultdict


def create_id(p, o):
    return str(p).zfill(6) + str(o).zfill(6)


n, m = [int(i) for i in input().split()]
db = defaultdict(list)
for i in range(m):
    p, y = [int(i) for i in input().split()]
    db[p].append((y, i))

ans = [None] * m
for p in db:
    db[p].sort()
    for i in range(len(db[p])):
        ans[db[p][i][1]] = create_id(p, i + 1)
print(*ans, sep="\n")
