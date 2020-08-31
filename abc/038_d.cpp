#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using pint = pair<int, int>;

const int INF = 1001001001;
const int MAX = 100000;

int main() {
  int n, w, h;
  cin >> n;
  vector<pint> v(n);
  rep(i, n) {
    cin >> w >> h;
    v[i] = pint(w, -h);
  }
  sort(v.begin(), v.end());

  vector<int> a(n);
  rep(i, n) a[i] = -v[i].second;

  vector<int> dp(MAX, INF);
  rep(i, n) * lower_bound(dp.begin(), dp.end(), a[i]) = a[i];
  cout << lower_bound(dp.begin(), dp.end(), INF) - dp.begin() << endl;
  return 0;
}
