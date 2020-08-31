#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
  int N, K;
  cin >> N >> K;
  vector<int> v(N);
  rep(i, N) {
    char c;
    cin >> c;
    int t = c - 'a';
    v[i] = t;
  }
  vector<int> m(26, 0), mt, ans(N);
  rep(i, N) m[v[i]]++;
  mt = m;

  int cnt = 0;
  rep(i, N) {
    rep(j, 26) {
      if (mt[j] == 0) continue;
      int test = 0;
      if (v[i] != j) test++;
      int c = 0;
      rep(k, 26) {
        if (k == v[i])
          c += min(m[k] - 1, mt[k]);
        else if (k == j)
          c += min(m[k], mt[k] - 1);
        else
          c += min(m[k], mt[k]);
      }
      c = N - i - c - 1;
      if (cnt + test + c <= K) {
        ans[i] = j;
        m[v[i]]--;
        mt[j]--;
        cnt += test;
        break;
      }
    }
  }

  for (auto x : ans) {
    char c = 'a' + x;
    cout << c;
  }
  cout << endl;

  return 0;
}
