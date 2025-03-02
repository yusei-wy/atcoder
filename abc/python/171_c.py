n = int(input())

if 1 <= n and n <= 26:
    print(chr((n - 1) + 97))
    exit()

ans = ""
while (n != 0):
    a, b = n//26, n % 26
    asub, bsub = 1, 1

    # 702 az から 26 を超えてしまうのでおかしくなる
    if a > 26:
        diff = a - 26
        asub += diff
        bsub -= diff

    ans += chr(a + 97 - asub)
    if b != 0:
        ans += chr(b + 97 - bsub)
    print(
        f"a: {a}({chr(a + 97)}) b: {b}({chr(b + 97)}, asub: {asub}, bsub: {bsub}")
    n -= (a*26)
    n -= b

print(ans)
