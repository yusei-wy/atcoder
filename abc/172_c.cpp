#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;

int main() {
  ll N, M, K;
  cin >> N >> M >> K;
  vector<ll> A(N), B(M);
  vector<ll> a(N + 1, 0), b(M + 1, 0);
  rep(i, N) {
    cin >> A[i];
    a[i + 1] = a[i] + A[i];
  }
  rep(i, M) {
    cin >> B[i];
    b[i + 1] = b[i] + B[i];
  }

  ll ans = 0, j = M;
  rep(i, N + 1) {
    if (a[i] > K) break;
    while (b[j] > K - a[i]) j--;
    ans = max(ans, i + j);
  }
  cout << ans << endl;

  return 0;
}
