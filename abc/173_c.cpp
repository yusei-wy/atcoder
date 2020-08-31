#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using GraphI = vector<vector<int>>;
using GraphC = vector<vector<char>>;
using pint = pair<int, int>;

int main() {
  int H, W, K;
  cin >> H >> W >> K;
  GraphC g(H, vector<char>(W));
  rep(y, H) rep(x, W) cin >> g[y][x];

  int ans = 0;
  rep(bitR, 1 << H) {
    rep(bitC, 1 << W) {
      int black = 0;
      rep(y, H) {
        rep(x, W) {
          if ((bitR >> y & 1) && (bitC >> x & 1) && g[y][x] == '#') {
            black++;
          }
        }
      }
      if (black == K) ans++;
    }
  }

  cout << ans << endl;

  return 0;
}
