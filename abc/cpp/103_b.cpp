#include <bits/stdc++.h>
#define rep(i, f, n) for (ll i = (f); i < (ll)(n); i++)
#define repe(i, f, n) for (ll i = (f); i <= (ll)(n); i++)
using namespace std;
using ll = long long;
using pint = pair<int, int>;

int main() {
  string S, T;
  cin >> S >> T;
  reverse(S.begin(), S.end());
  if (S == T)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;

  return 0;
}
