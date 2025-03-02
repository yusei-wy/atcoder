#include <bits/stdc++.h>
#define rep(i, f, n) for (ll i = (f); i < (ll)(n); i++)
#define repe(i, f, n) for (ll i = (f); i <= (ll)(n); i++)
using namespace std;
using ll = long long;
using pint = pair<int, int>;

int main() {
  int n, a;
  cin >> n;
  set<int> s;
  rep(i, 0, n) {
    cin >> a;
    s.insert(a);
  }
  vector<int> v(s.begin(), s.end());
  sort(v.begin(), v.end());
  cout << v[v.size() - 2] << endl;
  return 0;
}
