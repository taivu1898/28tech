#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  int m, n;
  cin >> m >> n;

  cout << 1ll * m / 2 * n + (m % 2) * 1ll * n / 2;

  return 0;
}
