#include <bits/stdc++.h>
#define rep(i, f, n) for (ll i = (f); i < (ll)(n); i++)
#define repe(i, f, n) for (ll i = (f); i <= (ll)(n); i++)
using namespace std;
using ll = long long;
using GraphI = vector<vector<int>>;
using GraphC = vector<vector<char>>;
using pint = pair<int, int>;

int main() {
  int H, W;
  cin >> H >> W;
  GraphC S;
  rep(i, 0, H) rep(j, 0, W) cin >> S[i][j];

  GraphI d(H, vector<int>(W, 0));
  d[sy][sx] = true;
  queue<pint> q;
  q.push(pint(sy, sx));

  int dx[4] = {0, 1, 0, -1};
  int dy[4] = {-1, 0, 1, 0};

  while (!q.empty()) {
    auto now = q.front();
    q.pop();

    int y = now.first, x = now.second;

    rep(i, 0, 4) {
      int ny = now.first + y;
      int nx = now.second + x;
      if (ny < 0 || ny >= H || nx < 0 || nx >= W) continue;
      if (S[ny][nx] == '#') continue;
      if (d[ny][nx]) continue;
      d[ny][nx] = true;

      S[ny][nx] =
    }
  }

  return 0;
}
