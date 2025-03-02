n, m = [int(i)for i in input().split()]
t = sum([int(i)for i in input().split()])
ans = max(-1, n - t)
print(ans)
