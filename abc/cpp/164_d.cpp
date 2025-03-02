#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;

const int mod = 2019;

int main() {
  string s;
  cin >> s;
  int n = s.size();
  // 配列の添字は0から
  // そのままの値で扱うと s[0] というのが1の位ではなく最上位の値になる
  // そうなると 10の何乗 * 数字　角の部分が添え字になっているように reverse
  // している
  // 詳細は解説のノートを
  reverse(s.begin(), s.end());
  int x = 1, tot = 0;
  vector<int> cnt(mod);
  ll ans = 0;
  rep(i, n) {
    cnt[tot]++;
    tot += (s[i] - '0') * x;
    tot %= mod;
    ans += cnt[tot];
    x = x * 10 % mod;
  }
  cout << ans << endl;
  return 0;
}
