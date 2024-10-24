#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  int a1, a2, a3, b1, b2, b3, n;
  cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3 >> n;

  int tong_cup = a1 + a2 + a3;
  int tong_huy_chuong = b1 + b2 + b3;

  int kcup = tong_cup % 5 == 0 ? tong_cup / 5 : tong_cup / 5 + 1;
  int khc = tong_huy_chuong % 10 == 0 ? tong_huy_chuong / 10
                                      : tong_huy_chuong / 10 + 1;

  kcup + khc <= n ? cout << "YES" : cout << "NO";
  cout << endl;

  return 0;
}
