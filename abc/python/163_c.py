from collections import Counter
n = int(input())
a = [int(i)for i in input().split()]
c = Counter(a)
ans = [0] * n
for i in range(1, 1 + n):
    print(c[i])
