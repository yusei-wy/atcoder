#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using GraphC = vector<vector<char>>;
using GraphI = vector<vector<int>>;

int main() {
  int h, w, n, sx, sy;
  cin >> h >> w >> n;
  GraphC g(h, vector<char>(w, 'X'));
  rep(y, h) {
    rep(x, w) {
      cin >> g[y][x];
      if (g[y][x] == 'S') {
        sy = y;
        sx = x;
      }
    }
  }

  int dy[4] = {-1, 0, 1, 0};
  int dx[4] = {0, 1, 0, -1};

  int ans = 0;
  rep(i, n) {
    char goal = (i + 1) + '0';
    GraphI d(h, vector<int>(w, -1));
    d[sy][sx] = 0;
    queue<pair<int, int>> q;
    q.push(make_pair(sy, sx));

    while (!q.empty()) {
      pair<int, int> now = q.front();
      q.pop();

      if (g[now.first][now.second] == goal) {
        ans += d[now.first][now.second];
        sy = now.first;
        sx = now.second;
        break;
      }

      rep(j, 4) {
        int ny, nx;
        ny = now.first + dy[j];
        nx = now.second + dx[j];
        if (ny < 0 || ny >= h || nx < 0 || nx >= w) continue;
        if (g[ny][nx] == 'X') continue;
        if (d[ny][nx] != -1) continue;

        d[ny][nx] = d[now.first][now.second] + 1;
        q.push(make_pair(ny, nx));
      }
    }
  }

  cout << ans << endl;

  return 0;
}
