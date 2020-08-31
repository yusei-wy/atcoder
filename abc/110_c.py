s = list(input())
t = list(input())
ans = "Yes"
ma, ima = {}, {}
for i in range(len(s)):
    print(f"ma: {ma}, ima: {ima}")
    if (s[i] in ma and ma[s[i]] != t[i] or
            t[i] in ima and ima[t[i]] != s[i]):
        ans = "No"
        break
    ma[s[i]], ima[t[i]] = t[i], s[i]
    print("2", s[i], t[i], ma[s[i]], ima[t[i]])
print(ans)
