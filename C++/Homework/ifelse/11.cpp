#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  int a, b, c;
  cin >> a >> b >> c;

  if (a > 0 && b > 0 && c > 0 && a + b > c && b + c > a && a + c > b) {
    if (a == b && a == c) {
      cout << "1" << endl;
    } else if (a == b || b == c) {
      cout << "2" << endl;
    } else if (a * a + b * b == c * c || c * c + a * a == b * b ||
               b * b + c * c == a * a) {
      cout << "3" << endl;
    } else {
      cout << "4" << endl;
    }
  } else {
    cout << "INVALID\n";
  }

  return 0;
}
