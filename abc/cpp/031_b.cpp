#include <bits/stdc++.h>
#define rep(i, f, n) for (ll i = (f); i < (ll)(n); i++)
#define repe(i, f, n) for (ll i = (f); i <= (ll)(n); i++)
using namespace std;
using ll = long long;
using pint = pair<int, int>;

int main() {
  int L, H, N, a;
  cin >> L >> H >> N;
  rep(i, 0, N) {
    cin >> a;
    if (L <= a && a <= H)
      cout << 0 << endl;
    else if (a < L)
      cout << L - a << endl;
    else
      cout << -1 << endl;
  }

  return 0;
}
