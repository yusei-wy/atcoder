#include <bits/stdc++.h>
#define rep(i, f, n) for (ll i = (f); i < (ll)(n); i++)
#define repe(i, f, n) for (ll i = (f); i <= (ll)(n); i++)
using namespace std;
using ll = long long;
using pint = pair<int, int>;

int main() {
  int d, t, s;
  cin >> d >> t >> s;
  if (s * t >= d)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;

  return 0;
}
