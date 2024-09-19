#include <iomanip>
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  double r, PI = 3.14;
  cin >> r;

  double chu_vi_hinh_tron = r * 2 * PI;
  double dien_tich_hinh_tron = PI * r * r;

  cout << fixed << setprecision(4) << chu_vi_hinh_tron << ' ' << fixed
       << setprecision(4) << dien_tich_hinh_tron << endl;

  return 0;
}
