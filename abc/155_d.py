n, k = [int(i) for i in input().split()]
a = [int(i) for i in input().split()]
b = []
for i in range(n):
    for j in range(i + 1, n):
        print(a[i], a[j])
        b.append(a[i] * a[j])
ans = list(sorted(b))
print(ans[k])
