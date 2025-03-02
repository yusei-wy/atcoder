#include <bits/stdc++.h>
#define rep(i, f, n) for (ll i = (f); i < (ll)(n); i++)
#define repe(i, f, n) for (ll i = (f); i <= (ll)(n); i++)
using namespace std;
using ll = long long;
using pint = pair<int, int>;

int main() {
  int N, Q, l, r, t;
  cin >> N >> Q;
  vector<int> a(N, 0);
  rep(i, 0, Q) {
    cin >> l >> r >> t;
    l--;
    r--;
    repe(j, l, r) a[j] = t;
  }
  rep(i, 0, N) cout << a[i] << endl;

  return 0;
}
