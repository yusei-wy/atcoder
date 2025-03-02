from collections import Counter

S = input()
mods = [0]
num, ten = 0, 1
for n in S[::-1]:
    num += int(n) * ten
    num %= 2019
    mods.append(num)
    ten *= 10
    ten %= 2019

c = Counter(mods)
ans = 0
for v in c.values():
    ans += v * (v - 1) // 2
print(ans)
