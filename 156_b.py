def base_oct_to_n(x, n):
    tmp = x
    out = ''
    while tmp > 0:
        out = str(tmp % n) + out
        tmp = int(tmp/n)
    return out


n, k = [int(i) for i in input().split()]
print(len(base_oct_to_n(n, k)))
