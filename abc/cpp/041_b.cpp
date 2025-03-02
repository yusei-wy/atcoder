#include <bits/stdc++.h>
#define rep(i, f, n) for (ll i = (f); i < (ll)(n); i++)
#define repe(i, f, n) for (ll i = (f); i <= (ll)(n); i++)
using namespace std;
using ll = long long;
using pint = pair<int, int>;

const int MOD = 1e9 + 7;

int main() {
  ll A, B, C;
  cin >> A >> B >> C;
  cout << A * B % MOD * C % MOD << endl;
  return 0;
}
