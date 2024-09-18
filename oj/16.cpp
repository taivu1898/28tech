#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  int x, y, z, t;
  cin >> x >> y >> z >> t;

  cout << x << "  " << y << "  " << z << "  " << t << endl;
  cout << y << "--" << z << "--" << x << "--" << t << endl;
  cout << 1ll * x * 2 << "," << 1ll * y * 3 << "," << 1ll * 4 * z << ","
       << 1ll * 5 * t << endl;
  cout << "KET THUC !!\n";

  return 0;
}
