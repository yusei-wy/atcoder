n, k = [int(i) for i in input().split()]
a = [int(i) for i in input().split()]
s = []
o = [-1] * (n + 1)  # ord 訪れた箇所, v が1スタートなので注意
c, l = 1, 0  # 周期, 例外

v = 1
while o[v] == -1:
    o[v] = len(s)
    s.append(v)
    v = a[v-1]
c = len(s) - o[v]
l = o[v]

if k < l:
    print(s[k])
else:
    k -= l
    k %= c
    print(s[l + k])
