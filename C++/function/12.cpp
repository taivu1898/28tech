#include <iostream>

using namespace std;
using ll = long long;

bool so_tang(int n) {
  while (n >= 10) {
    int digit = n % 10;
    int so_ke_tiep = n % 100 / 10;
    if (so_ke_tiep >= digit) {
      return false;
    }
    n /= 10;
  }
  return true;
}

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  int a, b;
  cin >> a >> b;

  for (int i = a; i <= b; ++i) {
    if (so_tang(i)) {
      cout << i << ' ';
    }
  }

  return 0;
}
