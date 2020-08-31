#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;

const ll INF = 1001001001;

int main() {
  ll n;
  cin >> n;
  int ans = 0;
  ll i = 2;
  while (n > 0) {
    ll div = n / i;
    n = div;
    i++;
  }
  cout << i - 3 << endl;
  return 0;
}
