#include <bits/stdc++.h>
#define rep(i, f, n) for (ll i = (f); i < (ll)(n); i++)
#define repe(i, f, n) for (ll i = (f); i <= (ll)(n); i++)
using namespace std;
using ll = long long;
using pint = pair<int, int>;

int main() {
  int h1, w1, h2, w2;
  cin >> h1 >> w1 >> h2 >> w2;

  if (h1 == h2 || w1 == w2 || h1 == w2 || h2 == w1)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;

  return 0;
}
