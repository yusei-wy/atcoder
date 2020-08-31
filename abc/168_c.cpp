#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
typedef long long ll;

const double PI = acos(-1);

int main() {
  int a, b, h, m;
  cin >> a >> b >> h >> m;
  double th = double(h * 60 + m) / 720 * 2 * PI;
  double tm = double(m) / 60 * 2 * PI;
  double xh = a * cos(th), yh = a * sin(th);
  double xm = b * cos(tm), ym = b * sin(tm);
  // 2乗するので絶対値を取る必要はない
  double dx = xh - xm, dy = yh - ym;
  double ans = sqrt(dx * dx + dy * dy);
  // cout だと小数点以下が6桁程しか出力されないので printf を使用する
  printf("%.10f\n", ans);
  return 0;
}
