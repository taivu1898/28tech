#include <iostream>

using namespace std;
using ll = long long;

int solve(int x, int y, int z) {
  cout << "28tech.com.vn\n";
  cout << 2 * x << ' ' << 3 * y << ' ' << 4 * z << endl;
  return x * y * z;
}

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  int a, b, c;
  cin >> a >> b >> c;

  cout << solve(a, b, c);

  return 0;
}
