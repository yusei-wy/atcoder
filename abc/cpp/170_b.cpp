#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;

int main() {
  int x, y;
  cin >> x >> y;

  rep(a, x + 1) {
    int b = x - a;
    if (2 * a + 4 * b == y) {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;
  return 0;
}
