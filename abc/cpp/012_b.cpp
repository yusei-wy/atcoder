#include <bits/stdc++.h>
#define rep(i, f, n) for (ll i = (f); i < (ll)(n); i++)
#define repe(i, f, n) for (ll i = (f); i <= (ll)(n); i++)
using namespace std;
using ll = long long;
using pint = pair<int, int>;

int main() {
  int n;
  cin >> n;
  int h = n / 3600;
  int m = n / 60 % 60;
  int s = n % 60;
  printf("%02d:%02d:%02d\n", h, m, s);
  return 0;
}
