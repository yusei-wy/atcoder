#include <bits/stdc++.h>
#define rep(i, f, n) for (ll i = (f); i < (ll)(n); i++)
#define repe(i, f, n) for (ll i = (f); i <= (ll)(n); i++)
using namespace std;
using ll = long long;
using GraphI = vector<vector<int>>;
using GraphC = vector<vector<char>>;
using pint = pair<int, int>;

int main() {
  int N;
  cin >> N;
  GraphC g(N, vector<char>(N));
  rep(y, 0, N) rep(x, 0, N) cin >> g[y][x];

  for (int x = 0; x < N; x++) {
    for (int y = N - 1; y >= 0; y--) cout << g[y][x];
    cout << endl;
  }

  return 0;
}
