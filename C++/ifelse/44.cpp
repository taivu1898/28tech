#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  int n;
  cin >> n;

  cout << 1ll * n * (n + 1) / 2 << endl;
  cout << 1ll * n * (n + 1) * (2 * n + 1) / 6 << endl;
  cout << n / 3 << endl;

  n /= 3;
  cout << (3ll * n * (1 + n)) / 2 << endl;

  return 0;
}
