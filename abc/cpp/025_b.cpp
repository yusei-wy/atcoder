#include <bits/stdc++.h>
#define rep(i, f, n) for (ll i = (f); i < (ll)(n); i++)
#define repe(i, f, n) for (ll i = (f); i <= (ll)(n); i++)
using namespace std;
using ll = long long;
using pint = pair<int, int>;

int main() {
  int N, A, B, d;
  cin >> N >> A >> B;
  string s;
  int ans = 0;
  rep(i, 0, N) {
    cin >> s >> d;
    int x = d;
    if (d < A)
      x = A;
    else if (d > B)
      x = B;
    if (s == "East")
      ans += x;
    else
      ans -= x;
  }

  if (ans > 0)
    cout << "East ";
  else if (ans < 0) {
    cout << "West ";
    ans *= -1;
  }
  cout << ans << endl;

  return 0;
}
