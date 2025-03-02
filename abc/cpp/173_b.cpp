#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
  int N;
  cin >> N;
  int c0 = 0, c1 = 0, c2 = 0, c3 = 0;
  string s;
  rep(i, N) {
    cin >> s;
    if (s == "AC") c0++;
    if (s == "WA") c1++;
    if (s == "TLE") c2++;
    if (s == "RE") c3++;
  }

  cout << "AC x " << c0 << endl;
  cout << "WA x " << c1 << endl;
  cout << "TLE x " << c2 << endl;
  cout << "RE x " << c3 << endl;

  return 0;
}
