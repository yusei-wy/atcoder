n, m = [int(i) for i in input().split()]
a = sorted([int(i) for i in input().split()], reverse=True)

ans = 0
t = sum(a) / (4*m)
for i in a:
    if i <= t:
        break
    ans += 1

if ans >= m:
    print("Yes")
else:
    print("No")
