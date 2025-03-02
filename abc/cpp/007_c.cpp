#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using GraphC = vector<vector<char>>;
using GraphI = vector<vector<int>>;

int dx[4] = {0, 1, 0, -1};
int dy[4] = {-1, 0, 1, 0};

int main() {
  int r, c, sy, sx, gy, gx;
  cin >> r >> c >> sy >> sx >> gy >> gx;
  sy--;
  sx--;
  gy--;
  gx--;
  GraphC g(r, vector<char>(c));
  rep(y, r) rep(x, c) cin >> g[y][x];

  GraphI d(50, vector<int>(50, -1));
  d[sy][sx] = 0;
  queue<pair<int, int>> q;
  q.push(make_pair(sy, sx));

  while (!q.empty()) {
    pair<int, int> current = q.front();
    q.pop();

    rep(i, 4) {
      int ny, nx;
      ny = current.first + dy[i];
      nx = current.second + dx[i];
      if (nx < 0 || nx >= c || ny < 0 || ny >= r) continue;
      if (g[ny][nx] == '#') continue;
      if (d[ny][nx] != -1) continue;

      d[ny][nx] = d[current.first][current.second] + 1;
      q.push(make_pair(ny, nx));
    }
  }

  cout << d[gy][gx] << endl;

  return 0;
}
