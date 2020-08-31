#include <bits/stdc++.h>
#define rep(i, f, n) for (ll i = (f); i < (ll)(n); i++)
#define repe(i, f, n) for (ll i = (f); i <= (ll)(n); i++)
using namespace std;
using ll = long long;
using pint = pair<int, int>;

int main() {
  int N, D;
  cin >> N >> D;
  int ans = 0;
  rep(i, 0, N) {
    int x, y;
    cin >> x >> y;
    if (sqrt(pow(x, 2) + pow(y, 2)) <= D) ans++;
  }

  cout << ans << endl;

  return 0;
}
