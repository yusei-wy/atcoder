#include <bits/stdc++.h>
#define rep(i, f, n) for (ll i = (f); i < (ll)(n); i++)
#define repe(i, f, n) for (ll i = (f); i <= (ll)(n); i++)
using namespace std;
using ll = long long;
using pint = pair<int, int>;

const int MAX = 200;

int main() {
  int n, a, b, c, d;
  cin >> n;
  vector<pint> red(n), blue(n);
  rep(i, 0, n) {
    cin >> a >> b;
    red.push_back(pint(a, b));
  }
  rep(i, 0, n) {
    cin >> c >> d;
    blue.push_back(pint(c, d));
  }
  sort(red.begin(), red.end());
  sort(blue.begin(), blue.end());

  vector<bool> used(n, false);
  int ans = 0;
  rep(i, 0, n) {
    auto b = blue[i];
    int index = -1;
    int ma = MAX;
    rep(j, 0, n) {
      if (!used[j] && red[j].second < b.second && red[j].first < b.first &&
          ma < red[j].second) {
        index = j;
        ma = max(ma, red[j].second);
      }
    }
    if (index == -1) continue;
    ans++;
    used[index] = true;
  }

  cout << ans << endl;

  return 0;
}
