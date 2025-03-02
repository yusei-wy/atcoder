#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;

const int MOD = 1000000007;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> f(N);
  rep(i, N) {
    cin >> f[i];
    f[i]--;
  }
  vector<int> dp(100001), tot(100001);

  // しゃくとり法
  vector<int> fnum(M);   // 区間に種類 i が何個あるか
  vector<int> L(N + 1);  // 各 i に対するしゃくとり法の区間
  int left = 0;
  rep(right, N) {
    fnum[f[right]]++;
    while (left < right && fnum[f[right]] > 1) {
      fnum[f[left]]--;
      left++;
    }
    L[right + 1] = left;
  }

  // 累積和で高速化した dp
  dp[0] = 1;
  tot[0] = 0;
  tot[1] = 1;
  for (int i = 1; i <= N; i++) {
    dp[i] = (tot[i] - tot[L[i]] + MOD) % MOD;  // dp
    tot[i + 1] = (tot[i] + dp[i]) % MOD;       // 累積
  }

  cout << dp[N] << endl;

  return 0;
}
