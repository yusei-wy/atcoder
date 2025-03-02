#include <bits/stdc++.h>
#define rep(i, f, n) for (ll i = (f); i < (ll)(n); i++)
#define repe(i, f, n) for (ll i = (f); i <= (ll)(n); i++)
using namespace std;
using ll = long long;
using pint = pair<int, int>;

int main() {
  int n, t;
  cin >> n >> t;
  vector<int> a(n);
  rep(i, 0, n) cin >> a[i];

  int ans = t;
  int prev = a[0];
  rep(i, 1, n) {
    int x = a[i] - a[i - 1];
    if (x > t) {
      ans += t;
      prev = a[i];
    } else {
      ans += x;
    }
  }

  cout << ans << endl;

  return 0;
}
