n = int(input())
a = [int(i) for i in input().split()]
d = {}
for a in A:
    if a in d:
        d[a] += 1
    else:
        d[a] = 1
ans = "No"
for v in d.values():
    if v == 2:
        ans = "Yes"
        break
print(ans)
