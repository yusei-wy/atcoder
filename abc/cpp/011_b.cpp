#include <bits/stdc++.h>
#define rep(i, f, n) for (ll i = (f); i < (ll)(n); i++)
#define repe(i, f, n) for (ll i = (f); i <= (ll)(n); i++)
using namespace std;
using ll = long long;
using pint = pair<int, int>;

int main() {
  string s;
  cin >> s;
  printf("%c", toupper(s[0]));
  rep(i, 1, s.size()) printf("%c", tolower(s[i]));
  cout << endl;
  return 0;
}
