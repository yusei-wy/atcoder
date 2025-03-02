#include <iostream>
#include <vector>
using namespace std;

const int MAX_N = 100000;

vector<int> memo(MAX_N, -1);  // memo[i] が i についての答え
int rec(int n) {
  if (n == 0) return 0;               // 終端条件
  if (memo[n] != -1) return memo[n];  // 既に探索済みならリターン

  int ans = n;  // INF の気持ち

  // 1, 6, 6^2, ..., を試す (n を超えない範囲で)
  for (int pow6 = 1; pow6 <= n; pow6 *= 6) ans = min(ans, rec(n - pow6) + 1);

  // 1, 9, 9^2, ..., を試す (n を超えない範囲で)
  for (int pow9 = 1; pow9 <= n; pow9 *= 9) ans = min(ans, rec(n - pow9) + 1);

  // メモしながらリターン
  return memo[n] = ans;
}

int main() {
  int n;
  cin >> n;

  cout << rec(n) << endl;
}
