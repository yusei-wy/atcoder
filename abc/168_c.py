import math
a, b, h, m = [int(i) for i in input().split()]

rad = math.pi * 2 * (h/12.0 + m/60.0 / 12.0 - m/60.0)
ans = math.sqrt(a**2 + b**2 - 2*a*b*math.cos(rad))
print(ans)
