#include <bits/stdc++.h>
#define rep(i, f, n) for (ll i = (f); i < (ll)(n); i++)
#define repe(i, f, n) for (ll i = (f); i <= (ll)(n); i++)
using namespace std;
using ll = long long;
using pint = pair<int, int>;

int main() {
  int m;
  cin >> m;
  if (m < 100)
    printf("00\n");
  else if (100 <= m && m <= 5000)
    printf("%02d\n", m / 100);
  else if (6000 <= m && m <= 30000)
    printf("%d\n", m / 1000 + 50);
  else if (35000 <= m && m <= 70000)
    printf("%d\n", (m / 1000 - 30) / 5 + 80);
  else if (m > 70000)
    printf("89\n");
  return 0;
}
