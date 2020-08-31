INF = 10**18 + 1

n, k = [int(i) for i in input().split()]
a = sorted([int(i) for i in input().split()])
l, r = -INF, INF
while l + 1 < r:
    x = (l + r)/2
