#include <bits/stdc++.h>
#define rep(i, f, n) for (ll i = (f); i < (ll)(n); i++)
#define repe(i, f, n) for (ll i = (f); i <= (ll)(n); i++)
using namespace std;
using ll = long long;
using pint = pair<int, int>;

int main() {
  ll A, B;
  cin >> A >> B;
  ll b = B;
  ll c = 10;
  while (b / 10 > 0) {
    c *= 10;
    b /= 10;
  }

  cout << (A * c + B) * 2 << endl;

  return 0;
}
