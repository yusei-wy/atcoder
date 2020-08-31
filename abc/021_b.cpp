#include <bits/stdc++.h>
#define rep(i, f, n) for (ll i = (f); i < (ll)(n); i++)
#define repe(i, f, n) for (ll i = (f); i <= (ll)(n); i++)
using namespace std;
using ll = long long;
using pint = pair<int, int>;

int main() {
  int n, a, b, k, x;
  cin >> n >> a >> b >> k;
  vector<int> p(n, 0);
  rep(i, 0, k) {
    cin >> x;
    p[x]++;
    if (p[x] > 1 || x == a || x == b) {
      cout << "NO" << endl;
      return 0;
    }
  }

  cout << "YES" << endl;
  return 0;
}
