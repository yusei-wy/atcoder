#include <bits/stdc++.h>
#define rep(i, f, n) for (ll i = (f); i < (ll)(n); i++)
#define repe(i, f, n) for (ll i = (f); i <= (ll)(n); i++)
using namespace std;
using ll = long long;
using ull = unsigned long long;
using pint = pair<int, int>;

int main() {
  // [0, R] - [0, L - 1] で区間の個数を求められる
  ull l, r, x;
  cin >> l >> r >> x;
  if (l == 0)
    cout << (l / x + 1) << endl;
  else
    cout << (l / x - (r - 1) / x) << endl;
  return 0;
}
