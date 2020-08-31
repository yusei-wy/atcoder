#include <bits/stdc++.h>
#define rep(i, f, n) for (ll i = (f); i < (ll)(n); i++)
#define repe(i, f, n) for (ll i = (f); i <= (ll)(n); i++)
using namespace std;
using ll = long long;
using GraphI = vector<vector<int>>;
using GraphC = vector<vector<char>>;
using pint = pair<int, int>;

int main() {
  int a, b;
  cin >> a >> b;
  int diff = abs(a - b);
  int ans = min(diff, 10 - diff);
  cout << ans << endl;

  return 0;
}
