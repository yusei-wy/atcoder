#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;

int main() {
  ll x, y;
  cin >> x >> y;

  ll ans = 0;
  for (ll i = x; i <= y; i *= 2) ans++;
  cout << ans << endl;

  return 0;
}
