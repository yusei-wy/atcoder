#include <iostream>
#include <string>
using namespace std;
typedef long long ll;

int main() {
  ll n;
  cin >> n;
  string ans = "";

  while (n != 0) {
    if (n % 2 == 0) {
      ans = "0" + ans;
    } else {
      n--;
      ans = "1" + ans;
    }
    n /= -2;
  }

  if (ans == "") ans = "0";

  cout << ans << endl;

  return 0;
}
