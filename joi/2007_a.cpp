#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using GraphI = vector<vector<int>>;
using GraphC = vector<vector<char>>;
using ping = pair<int, int>;

int f(int& n, int amount) {
  int ret = 0;
  while ((n - amount) >= 0) {
    n -= amount;
    ret++;
  }
  return ret;
}

int main() {
  int n;
  cin >> n;
  n = 1000 - n;
  int ans = 0;
  ans += f(n, 500);
  ans += f(n, 100);
  ans += f(n, 50);
  ans += f(n, 10);
  ans += f(n, 5);
  ans += f(n, 1);

  cout << ans << endl;

  return 0;
}
