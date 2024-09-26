#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  int c1, c2, c3, c4, c5;
  cin >> c1 >> c2 >> c3 >> c4 >> c5;

  int tong = c1 + c2 + c3 + c4 + c5;

  if (tong % 5 == 0 && tong != 0) {
    cout << tong / 5 << endl;
  } else {
    cout << -1 << endl;
  }

  return 0;
}
