#include <bits/stdc++.h>
#define rep(i, f, n) for (ll i = (f); i < (ll)(n); i++)
#define repe(i, f, n) for (ll i = (f); i <= (ll)(n); i++)
using namespace std;
using ll = long long;
using pint = pair<int, int>;

int main() {
  int ans = 0;
  int n = 12;
  string s;
  rep(i, 0, n) {
    cin >> s;
    rep(j, 0, s.size()) {
      if (s[j] == 'r') {
        ans++;
        break;
      }
    }
  }
  cout << ans << endl;

  return 0;
}
