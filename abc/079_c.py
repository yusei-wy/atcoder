A = [int(i) for i in list(input())]
n = 3
for i in range(1 << n):
    a, b, c, d = A
    o = ["-", "-", "-"]
    p = [-1, -1, -1]
    ans = 0
    for j in range(n):
        if i >> j & 1:
            o[j] = "+"
            p[j] = 1

    if a + (b*p[0]) + (c*p[1]) + (d*p[2]) == 7:
        print("{}{}{}{}{}{}{}=7".format(a, o[0], b, o[1], c, o[2], d))
        break
