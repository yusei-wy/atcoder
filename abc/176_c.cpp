#include <bits/stdc++.h>
#define rep(i, f, n) for (ll i = (f); i < (ll)(n); i++)
#define repe(i, f, n) for (ll i = (f); i <= (ll)(n); i++)
using namespace std;
using ll = long long;
using pint = pair<int, int>;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, 0, n) cin >> a[i];

  ll ans = 0;
  int ma = a[0];
  rep(i, 1, n) {
    if (a[i] < ma) ans += ma - a[i];
    ma = max(ma, a[i]);
  }

  cout << ans << endl;

  return 0;
}
