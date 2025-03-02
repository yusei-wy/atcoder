n, m = [int(i) for i in input().split()]
p = [[int(i) for i in input().split()] for _ in range(m)]
a = []
for x in p:
    if x[0] == 1:
        a.append(x[1])

b = []
for x in p:
    if x[1] == n:
        b.append(x[0])
if set(a) & set(b):
    print("POSSIBLE")
else:
    print("IMPOSSIBLE")
