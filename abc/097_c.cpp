#include <bits/stdc++.h>
#define rep(i, f, n) for (ll i = (f); i < (ll)(n); i++)
#define repe(i, f, n) for (ll i = (f); i <= (ll)(n); i++)
using namespace std;
using ll = long long;

int main() {
  string s;
  cin >> s;
  int K;
  cin >> K;
  set<string> ss;
  rep(i, 0, s.size()) rep(j, 1, K) ss.insert(s.substr(i, j));

  vector<string> v;
  for (auto x : ss) {
    v.push_back(x);
  }
  sort(v.begin(), v.end());

  cout << v[K - 1] << endl;

  return 0;
}
