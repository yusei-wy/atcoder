#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using pint = pair<int, int>;

int main() {
  ll n;
  cin >> n;

  if (n < 27) {
    printf("%c\n", ltoa(n));
  }

  return 0;
}
