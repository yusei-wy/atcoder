#include <bits/stdc++.h>
#define rep(i, f, n) for (ll i = (f); i < (ll)(n); i++)
#define repe(i, f, n) for (ll i = (f); i <= (ll)(n); i++)
using namespace std;
using ll = long long;
using pint = pair<int, int>;

int main() {
  int n, a;
  cin >> n;
  double tot = 0, bug = 0;
  rep(i, 0, n) {
    cin >> a;
    tot += a;
    if (a > 0) bug++;
  }

  cout << ceil(tot / bug) << endl;
  return 0;
}
