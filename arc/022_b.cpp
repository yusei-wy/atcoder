#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using pint = pair<int, int>;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  rep(i, N) cin >> A[i];

  int ans = 0;
  int right = 0;
  set<int> member;

  rep(left, N) {
    while (right < N && !member.count(A[right])) {
      member.insert(A[right]);
      right++;
    }

    ans = max(ans, right - left);

    if (right == left)
      right++;
    else
      member.erase(A[left]);
  }

  cout << ans << endl;

  return 0;
}
