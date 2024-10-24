#include <iostream>

using namespace std;
using ll = long long;

bool chua6(int n) {
  while (n) {
    int digit = n % 10;
    if (digit == 6) {
      return true;
    }
    n /= 10;
  }

  return false;
}

bool tongchan(int n) {
  int s = 0;

  while (n) {
    s += n % 10;
    n /= 10;
  }

  return s % 2 == 0;
}

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

  return sl_le > sl_chan;
}

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  int a, b;
  cin >> a >> b;

  for (int i = a; i <= b; ++i) {
    if (chua6(i) && tongchan(i) && chanle(i)) {
      cout << i << ' ';
    }
  }

  return 0;
}
