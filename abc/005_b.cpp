#include <bits/stdc++.h>
#define rep(i, f, n) for (ll i = (f); i < (ll)(n); i++)
#define repe(i, f, n) for (ll i = (f); i <= (ll)(n); i++)
using namespace std;
using ll = long long;
using pint = pair<int, int>;

int main() {
  int n, a, ans = 100;
  cin >> n;
  rep(i, 0, n) {
    cin >> a;
    ans = min(ans, a);
  }
  cout << ans << endl;
  return 0;
}
