#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;

const int INF = 1001001001;

int main() {
  int n;
  cin >> n;
  vector<int> t(n, 0);
  rep(i, n) cin >> t[i];

  int ans = INF;
  rep(bit, 1 << n) {
    vector<int> tot(2, 0);
    rep(i, n) { tot[(bit >> i & 1)] += t[i]; }
    ans = min(ans, max(tot[0], tot[1]));
  }

  cout << ans << endl;

  return 0;
}
