#include <bits/stdc++.h>
#define rep(i, f, n) for (ll i = (f); i < (ll)(n); i++)
#define repe(i, f, n) for (ll i = (f); i <= (ll)(n); i++)
using namespace std;
using ll = long long;
using pint = pair<int, int>;

int main() {
  int n, x, t;
  cin >> n >> x >> t;
  // たこ焼きを何回焼く必要があるか
  int times = (n + x - 1) / x;
  int ans = times * t;
  cout << ans << endl;

  return 0;
}
