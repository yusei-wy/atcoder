#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;

const ll MAX = 1000000000000000000;

int main() {
  int n;
  cin >> n;
  ll ans = 1;
  rep(i, n) {
    ll a;
    cin >> a;
    ans *= a;
  }
  printf("%lld\n", ans > MAX ? -1 : ans);
  return 0;
}
