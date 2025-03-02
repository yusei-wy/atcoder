#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> x(N), y(N), h(N);
  for (int i = 0; i < N; i++) {
    cin >> x[i] >> y[i] >> h[i];
  }

  // [0, 100] に座標があるので MAX を定義すると楽
  int MAX = 100;

  // y -> x 縦横にすると配列の順番に合うので扱いやすい
  for (int posY = 0; posY <= MAX; posY++) {
    for (int posX = 0; posX <= MAX; posX++) {
      // 頂上がどれくらいの高さであってほしいか
      // -1はまだよくわからないとき, 0以上は確定しているとき
      // -2はダメだとわかったとき
      int needH = -1;

      for (int i = 0; i < N; i++) {
        if (h[i] > 0) {
          // この頂点から見て, 頂上が posX, posY の時に
          // どれくらいの高さがあってほしいか求める
          int tmp = h[i] + abs(posY - y[i]) + abs(posX - x[i]);
          if (needH == -1) {
            needH = tmp;
          } else if (needH != tmp) {
            needH = -2;
            break;
          }
        }
      }
      // ダメだったら別の場所を探す
      if (needH == -2) continue;

      for (int i = 0; i < N; i++) {
        // 高さが0の場合に矛盾していないか調べる
        if (h[i] == 0) {
          int dist = abs(posY - y[i]) + abs(posX - x[i]);
          if (needH > dist) {
            needH = -2;
            break;
          }
        }
      }

      // ダメだったら別の場所を探す
      if (needH == -2) continue;

      cout << posX << " " << posY << " " << needH << endl;
      return 0;
    }
  }
}
