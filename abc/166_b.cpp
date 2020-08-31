
#include <iostream>
#include <set>
#include <vector>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n, k;
  cin >> n >> k;
  set<int> s;
  rep(i, k) {
    int d;
    cin >> d;
    vector<int> a(d);
    rep(j, d) {
      int x;
      cin >> x;
      s.insert(x);
    };
  }

  cout << n - s.size() << endl;

  return 0;
}
