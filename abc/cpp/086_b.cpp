#include <bits/stdc++.h>
#define rep(i, f, n) for (ll i = (f); i < (ll)(n); i++)
#define repe(i, f, n) for (ll i = (f); i <= (ll)(n); i++)
using namespace std;
using ll = long long;
using pint = pair<int, int>;

int main() {
  string a, b;
  cin >> a >> b;
  int x = stoi(a + b);
  double y = sqrt(x);

  if (ceil(y) == floor(y))
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}
