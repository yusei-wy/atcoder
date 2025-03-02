#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using pint = pair<int, int>;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> v(n);
  rep(i, n) cin >> v[i];
  sort(v.begin(), v.end());
  int ans = 0;
  rep(i, k) ans += v[i];
  cout << ans << endl;
  return 0;
}
