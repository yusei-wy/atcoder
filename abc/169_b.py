MAX = 10**18

n = int(input())
a = [int(i) for i in input().split()]
ans = 1
for i in a:
    if i == 0:
        print(0)
        exit()
    ans *= i
print(-1 if ans > MAX else ans)
