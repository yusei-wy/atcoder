#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using GraphI = vector<vector<int>>;
using GraphC = vector<vector<char>>;
using pint = pair<int, int>;

int main() {
  int h, w, sy, sx, gy, gx;
  cin >> h >> w;
  GraphC g(h, vector<char>(w));
  rep(y, h) {
    rep(x, w) {
      cin >> g[y][x];
      if (g[y][x] == 's') {
        sy = y;
        sx = x;
      } else if (g[y][x] == 'g') {
        gy = y;
        gx = x;
      }
    }
  }

  GraphI d(h, vector<int>(w, -1));
  d[sy][sx] = 0;
  deque<pint> q;
  q.push_front(pint(sy, sx));

  int dy[4] = {-1, 0, 1, 0};
  int dx[4] = {0, 1, 0, -1};
  while (!q.empty()) {
    pint now = q.front();
    int y = now.first, x = now.second;
    q.pop_front();
    rep(i, 4) {
      int ny = y + dy[i], nx = x + dx[i];
      if (ny < 0 || ny >= h || nx < 0 || nx >= w) continue;
      if (d[ny][nx] != -1) continue;
      if (g[ny][nx] == '#') {
        d[ny][nx] = d[y][x] + 1;
        q.push_back(pint(ny, nx));
      } else {
        d[ny][nx] = d[y][x];
        q.push_front(pint(ny, nx));
      }
    }
  }

  cout << (d[gy][gx] <= 2 ? "YES" : "NO") << endl;

  return 0;
}
