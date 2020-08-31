n = int(input())
a = [int(i) for i in input().split()]
b = [i - 1 for i in a]

# メディアンを
b.sort()
x = b[n//2]

print(b)
print(x)

# 答えを
ans = 0
for i in range(n):
    ans += max(x - b[i], -x + b[i])  # |a| = max(a, -a)
print(ans)
