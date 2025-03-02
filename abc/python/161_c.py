import fractions
n, k = [int(i) for i in input().split()]
if n <= k:
    print(n)
    exit()

print(fractions.gcd(n, k))
