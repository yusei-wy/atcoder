#include <bits/stdc++.h>
#define rep(i, f, n) for (ll i = (f); i < (ll)(n); i++)
#define repe(i, f, n) for (ll i = (f); i <= (ll)(n); i++)
using namespace std;
using ll = long long;

int main() {
  string S;
  cin >> S;
  int ans = 0;
  rep(i, 0, S.size() / 2) {
    if (S[i] != S[S.size() - 1 - i]) ans++;
  }

  cout << ans << endl;

  return 0;
}
