#include <iostream>
using namespace std;
typedef long long ll;

int main() {
  ll a, b, n;
  cin >> a >> b >> n;
  ll x = min(b - 1, n);
  cout << (a * x) / b - a * (x / b) << endl;
  return 0;
}
