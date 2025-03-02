#include <bits/stdc++.h>
#define rep(i, f, n) for (ll i = (f); i < (ll)(n); i++)
#define repe(i, f, n) for (ll i = (f); i <= (ll)(n); i++)
using namespace std;
using ll = long long;
using GraphI = vector<vector<int>>;
using GraphC = vector<vector<char>>;
using pint = pair<int, int>;

int main() {
  GraphC g(4, vector<char>(4));
  rep(y, 0, 4) rep(x, 0, 4) cin >> g[y][x];
  for (int y = 3; y >= 0; y--) {
    for (int x = 3; x >= 0; x--) {
      cout << g[y][x];
      if (x != 0) cout << " ";
    }
    cout << endl;
  }

  return 0;
}
