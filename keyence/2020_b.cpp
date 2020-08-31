#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using pint = pair<int, int>;

int main() {
  int n;
  cin >> n;
  vector<pint> v(n);
  rep(i, n) {
    int x, l;
    cin >> x >> l;
    v[i] = pint(x, l);
  }
  sort(v.begin(), v.end());

  int ans = n;
  int i = 1;
  do {
    pint prev = v[i - 1], now = v[i];
    if ((prev.first + prev.second > now.first) ||
        (now.first - now.second < prev.first)) {
      ans--;
    }
    i++;
  } while ((i < n - 1));

  cout << ans << endl;

  return 0;
}
