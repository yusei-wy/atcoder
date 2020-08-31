n = int(input())


def dfs(s):
    if int(s) > n:  # 文字列 s で始まる七五三の個数
        return 0
    ret = 1 if all(s.count(c) > 0 for c in "753") else 0  # s 自体が七五三数なら +1
    for c in "753":
        ret += dfs(s + c)
    return ret


print(dfs("0"))  # 本当は dfs('') と書きたいが4行目でのエラーを防ぐために仕方なく
