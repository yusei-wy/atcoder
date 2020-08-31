#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  ll n, m;
  cin >> n >> m;
  vector<ll> h(n);
  vector<bool> v(n, true);
  rep(i, n) { cin >> h[i]; }
  rep(i, m) {
    ll a, b;
    cin >> a >> b;
    a--;
    b--;
    if (h[a] <= h[b]) v[a] = false;
    if (h[b] <= h[a]) v[b] = false;
  }

  ll ans = 0;
  rep(i, n) if (v[i]) ans++;
  cout << ans << endl;

  return 0;
}
