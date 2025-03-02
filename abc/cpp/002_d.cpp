#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;

vector<vector<bool>> con(12, vector<bool>(12, false));

int main() {
  int n, m, x, y;
  cin >> n >> m;
  rep(i, m) {
    cin >> x >> y;
    x--;
    y--;
    // つながっていることを表している
    con[x][y] = true;
    con[y][x] = true;
  }

  int ans = 0;
  rep(bit, 1 << n) {
    vector<int> arr;
    rep(i, n) if (bit >> i & 1) arr.push_back(i);

    bool ok = true;
    for (auto a : arr) {
      for (auto b : arr) {
        // 同一ノードは無視
        if (a == b) continue;
        // 直接つながっていないノードを含む集合は弾く
        if (!con[a][b]) ok = false;
      }
    }

    if (ok) ans = max(ans, (int)arr.size());
  }

  cout << ans << endl;

  return 0;
}
