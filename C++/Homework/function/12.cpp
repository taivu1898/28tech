#include <iostream>

using namespace std;
using ll = long long;

bool so_tang(int n) {
  while (n >= 10) {
    int r = n % 10;
    n /= 10;
    while (n) {
      if (r <= n % 10) {
        return false;
      }
      r = n % 10;
      n /= 10;
    }
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
