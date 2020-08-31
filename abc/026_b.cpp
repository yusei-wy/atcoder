#include <bits/stdc++.h>
#define rep(i, f, n) for (ll i = (f); i < (ll)(n); i++)
#define repe(i, f, n) for (ll i = (f); i <= (ll)(n); i++)
using namespace std;
using ll = long long;
using pint = pair<int, int>;

int main() {
  int n, r;
  cin >> n;
  double ans = 0.0;
  vector<int> v(n);
  rep(i, 0, n) cin >> v[i];
  sort(v.begin(), v.end(), greater<int>());
  rep(i, 0, n) {
    double rr = pow(v[i], 2);
    bool even = (i + 1) % 2 == 0;
    if (even)
      ans -= rr;
    else
      ans += rr;
  }

  printf("%.6lf\n", ans * M_PI);

  return 0;
}
