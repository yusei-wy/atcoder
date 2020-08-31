#include <bits/stdc++.h>
#define rep(i, f, n) for (ll i = (f); i < (ll)(n); i++)
#define repe(i, f, n) for (ll i = (f); i <= (ll)(n); i++)
using namespace std;
using ll = long long;
using pint = pair<int, int>;

int main() {
  int N;
  cin >> N;
  vector<pair<string, int>> v(N);
  string s;
  int p, tot = 0;
  rep(i, 0, N) {
    cin >> s >> p;
    v[i] = make_pair(s, p);
    tot += p;
  }

  int half = tot / 2;
  rep(i, 0, N) {
    if (v[i].second > half) {
      cout << v[i].first << endl;
      return 0;
    }
  }

  cout << "atcoder" << endl;
  return 0;
}
