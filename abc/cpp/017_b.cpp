#include <bits/stdc++.h>
#define rep(i, f, n) for (ll i = (f); i < (ll)(n); i++)
#define repe(i, f, n) for (ll i = (f); i <= (ll)(n); i++)
using namespace std;
using ll = long long;
using pint = pair<int, int>;

int main() {
  string x;
  cin >> x;
  int n = x.size();

  rep(i, 0, n) {
    if (i != n - 1 && x[i] == 'c' && x[i + 1] == 'h') {
      i++;
    } else if (x[i] != 'o' && x[i] != 'k' && x[i] != 'u') {
      cout << "NO" << endl;
      return 0;
    }
  }

  cout << "YES" << endl;

  return 0;
}
