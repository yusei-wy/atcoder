#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
typedef long long ll;

const int INF = 1001001001;

vector<int> to[100005];

int main() {
  int n, m;
  cin >> n >> m;
  rep(i, m) {
    int a, b;
    cin >> a >> b;
    --a;
    --b;
    to[a].push_back(b);
    to[b].push_back(a);
  }

  queue<int> q;              // dfs の実装には queue を使う
  vector<int> dist(n, INF);  // 距離
  vector<int> pre(n, -1);    // 直前の頂点
  dist[0] = 0;
  q.push(0);
  while (!q.empty()) {
    // 最初の要素を取り出す
    int v = q.front();
    q.pop();
    for (int u : to[v]) {
      if (dist[u] != INF) continue;
      dist[u] = dist[v] + 1;
      pre[u] = v;
      q.push(u);
    }
  }

  cout << "Yes" << endl;
  rep(i, n) {
    if (i == 0) continue;
    int ans = pre[i];
    ++ans;
    cout << ans << endl;
  }

  return 0;
}
