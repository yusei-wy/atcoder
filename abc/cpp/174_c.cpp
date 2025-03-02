#include <bits/stdc++.h>
#define rep(i, f, n) for (ll i = (f); i < (ll)(n); i++)
#define repe(i, f, n) for (ll i = (f); i <= (ll)(n); i++)
using namespace std;
using ll = long long;
using ull = unsigned long long;
using pint = pair<int, int>;

const int MAX = 1e6;

int main() {
  int K;
  cin >> K;

  if (K % 2 == 0) {
    cout << -1 << endl;
    return 0;
  }

  ull x = 7;
  repe(i, 1, K) {
    cout << i << " " << x << endl;
    if (x % K == 0) {
      cout << i << endl;
      return 0;
    }

    x = x * 10 + 7;
  }

  cout << -1 << endl;
  return 0;
}
