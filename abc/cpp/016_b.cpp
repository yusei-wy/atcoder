#include <bits/stdc++.h>
#define rep(i, f, n) for (ll i = (f); i < (ll)(n); i++)
#define repe(i, f, n) for (ll i = (f); i <= (ll)(n); i++)
using namespace std;
using ll = long long;
using pint = pair<int, int>;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  bool plus = a + b == c;
  bool minus = a - b == c;
  char ans;
  if (plus && minus)
    ans = '?';
  else if (plus)
    ans = '+';
  else if (minus)
    ans = '-';
  else
    ans = '!';
  cout << ans << endl;
  return 0;
}
