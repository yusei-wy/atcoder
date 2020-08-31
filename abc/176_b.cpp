#include <bits/stdc++.h>
#define rep(i, f, n) for (ll i = (f); i < (ll)(n); i++)
#define repe(i, f, n) for (ll i = (f); i <= (ll)(n); i++)
using namespace std;
using ll = long long;
using pint = pair<int, int>;

int main() {
  string s;
  cin >> s;
  int tot = 0;
  rep(i, 0, s.size()) tot += s[i] - '0';
  if (tot % 9 == 0)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;

  return 0;
}
