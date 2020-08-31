#include <algorithm>
#include <iostream>
#include <string>
using namespace std;
typedef long long ll;

int main() {
  string s;
  ll k;
  cin >> s >> k;
  for (int i = 0; i < min((ll)s.size(), k); i++) {
    if (s[i] >= '2') {
      cout << s[i] << endl;
      return 0;
    }
  }
  cout << '1' << endl;
  return 0;
}
