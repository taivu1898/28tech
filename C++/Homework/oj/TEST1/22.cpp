#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  int x, y, z;
  cin >> x >> y >> z;

  int x1 = x % 10;
  int x2 = y % 100;
  int x3 = z % 1000;

  cout << x1 + x2 + x3 << endl;

  return 0;
}
