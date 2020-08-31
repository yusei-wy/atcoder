#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using GraphI = vector<vector<int>>;
using GraphC = vector<vector<char>>;
using ping = pair<int, int>;

int main() {
  int n;
  cin >> n;
  n = 1000 - n;
  int coins[6] = {500, 100, 50, 10, 5, 1};
  int ans = 0;
  while (n > 0) {
    rep(i, 6) {
      if (n >= coins[i]) {
        n -= coins[i];
        ans++;
        break;
      }
    }
  }

  cout << ans << endl;

  return 0;
}
