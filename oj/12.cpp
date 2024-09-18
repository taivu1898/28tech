#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  int x, y;
  cin >> x >> y;

  cout << 1ll * 5 * x + 1ll * 2 * y + 1ll * x * y << endl;

  return 0;
}
