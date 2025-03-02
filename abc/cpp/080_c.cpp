#include <bits/stdc++.h>
#define rep(i, f, n) for (ll i = (f); i < (ll)(n); i++)
#define repe(i, f, n) for (ll i = (f); i <= (ll)(n); i++)
using namespace std;
using ll = long long;
using pint = pair<int, int>;

const int MAX = 50;
int n, m;
int a[MAX], b[MAX];
bool g[MAX][MAX];
bool visited[MAX];

void dfs(int v) {
  visited[v] = true;
  for (int v2 = 0; v2 < n; v2++) {
    if (!g[v][v2]) continue;
    if (visited[v2]) continue;
    dfs(v2);
  }
}

int main() {
  cin >> n >> m;

  rep(i, 0, m) {
    cin >> a[i] >> b[i];
    a[i]--;
    b[i]--;
    g[a[i]][b[i]] = g[b[i]][a[i]] = true;
  }

  int ans = 0;
  rep(i, 0, m) {
    g[a[i]][b[i]] = g[b[i]][a[i]] = false;

    rep(j, 0, n) visited[j] = false;

    dfs(0);

    bool bridge = false;
    rep(j, 0, n) if (!visited[j]) bridge = true;
    if (bridge) ans++;

    g[a[i]][b[i]] = g[b[i]][a[i]] = true;
  }

  cout << ans << endl;

  return 0;
}
