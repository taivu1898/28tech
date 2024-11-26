#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  double a, b, c, d;
  cin >> a >> b >> c >> d;

  double tb = (a + b + 2 * c + 3 * d) / 7;
  if (tb >= 8) {
    cout << "GIOI";
  } else if (tb < 8 && tb >= 6.5) {
    cout << "KHA";
  } else if (tb < 6.5 && tb >= 5) {
    cout << "TRUNG BINH";
  } else {
    cout << "YEU";
  }

  return 0;
}
