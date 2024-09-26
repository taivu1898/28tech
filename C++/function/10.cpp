#include <iostream>

using namespace std;
using ll = long long;

bool chanle(int n) {
  int sl_chan = 0, sl_le = 0;

  while (n) {
    int digit = n % 10;
    if (digit % 2 == 0) {
      ++sl_chan;
    } else {
      ++sl_le;
    }
    n /= 10;
  }

  return sl_le < sl_chan;
}

bool check(int n) {
  int s = 0;

  while (n) {
    s += n % 10;
    n /= 10;
  }

  return chanle(s);
}

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  int n;
  cin >> n;

  for (int i = 1; i <= n; ++i) {
    if (check(i)) {
      cout << i << ' ';
    }
  }

  return 0;
}
