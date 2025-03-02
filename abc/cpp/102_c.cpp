#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using pint = pair<int, int>;

int main() {
  ll N;
  cin >> N;
  vector<ll> A(N), B(N);
  rep(i, N) {
    cin >> A[i];
    B[i] = A[i] - i;
  }

  // メディアンを
  sort(B.begin(), B.end());
  ll x = B[N / 2];

  rep(i, N) printf("B[%d] = %lld\n", i, B[i]);

  ll ans = 0;
  rep(i, N) {
    printf("%lld, %lld \n", x - B[i], -x + B[i]);
    ans += max(x - B[i], -x + B[i]);  // |A| = max(A, -A)
  }
  cout << ans << endl;

  return 0;
}
