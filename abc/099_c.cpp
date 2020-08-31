#include <cstdlib>
#include <iostream>
#include <vector>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
typedef long long ll;

int main() {
  int n;
  cin >> n;

  int ans = n;

  for (int i = 0; i <= n; i++) {
    cout << "i: " << i << endl;

    int cc = 0;
    int t = i;
    while (t > 0) {
      cc += t % 6;
      t /= 6;
      cout << "6 cc: " << cc << ", t: " << t << endl;
    }
    cout << " --- " << endl;
    t = n - i;
    while (t > 0) {
      cc += t % 9;
      t /= 9;
      cout << "9 cc: " << cc << ", t: " << t << endl;
    }
    if (ans > cc) ans = cc;
  }

  cout << ans << endl;

  return 0;
}
