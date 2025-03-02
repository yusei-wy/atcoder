#include <cmath>
#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  ll x;
  cin >> x;
  ll a, b;
  a = b = 1;
  while (true) {
    ll y = pow(a, 5) - pow(b, 5) if (y == x) break;

    if (y > x)
      b--;
    else
      a++;
  }

  cout << a << " " << b << endl;

  return 0;
}
