#include <bits/stdc++.h>
#define rep(i, f, n) for (ll i = (f); i < (ll)(n); i++)
#define repe(i, f, n) for (ll i = (f); i <= (ll)(n); i++)
using namespace std;
using ll = long long;
using pint = pair<int, int>;

const int MAX = 1000;

int main() {
  string s, t;
  cin >> s >> t;
  int ans = MAX;
  repe(i, 0, s.size() - t.size()) {
    int tot = 0;
    rep(j, 0, t.size()) if (s[i + j] != t[j]) tot++;
    ans = min(tot, ans);
  }

  cout << ans << endl;

  return 0;
}
