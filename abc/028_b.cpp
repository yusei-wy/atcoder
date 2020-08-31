#include <bits/stdc++.h>
#define rep(i, f, n) for (ll i = (f); i < (ll)(n); i++)
#define repe(i, f, n) for (ll i = (f); i <= (ll)(n); i++)
using namespace std;
using ll = long long;
using pint = pair<int, int>;

int main() {
  string s;
  cin >> s;
  int n = 6;
  vector<int> v(n, 0);
  rep(i, 0, s.size()) {
    int a = s[i] - 65;
    v[a]++;
  }
  rep(i, 0, n) {
    cout << v[i];
    if (i != n - 1) cout << " ";
  }
  cout << endl;

  return 0;
}
