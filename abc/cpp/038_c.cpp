#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using pint = pair<int, int>;

int main() {
  int N;
  cin >> N;
  vector<int> a(N);
  rep(i, N) cin >> a[i];

  ll ans = 0;
  int right = 1;  // [0, 1) は確実に条件を満たす
  rep(left, N) {
    while (right < N && (right <= left || a[right - 1] < a[right])) right++;
    ans += right - left;
    if (left == right) right++;
  }

  cout << ans << endl;

  return 0;
}
