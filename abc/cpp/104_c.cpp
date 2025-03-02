#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int d, g, p[11], c[11];
  cin >> d >> g;
  rep(i, d) cin >> p[i] >> c[i];

  int ans = 1e9;
  rep(mask, (1 << d)) {
    int s = 0, num = 0, restMax = -1;
    rep(i, d) {
      if (mask >> i & 1) {
        s += 100 * (i + 1) * p[i] + c[i];
        num += p[i];
      } else {
        restMax = i;
      }
    }
    if (s < g) {
      int s1 = 100 * (restMax + 1);
      int need = (g - s + s1 - 1) / s1;
      if (need >= p[restMax]) continue;
      num += need;
    }
    ans = min(ans, num);
  }

  cout << ans << endl;

  return 0;
}
