#include <cmath>
#include <iostream>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  int n;
  cin >> n;

  for (int i = 0; i <= n; i += 3) {
    cout << i << ' ';
  }
  cout << endl;

  for (int i = 1; i <= n; i *= 2) {
    cout << i << ' ';
  }
  cout << endl;

  for (int i = n;; ++i) {
    if (i % 17 == 0) {
      cout << i << endl;
      break;
    }
  }

  for (int i = n - 1; i >= 0; --i) {
    if (i % 7 == 0) {
      cout << i << endl;
      break;
    }
  }

  ll ht = 1, bn = 1;
  while (ht <= n) {
    cout << ht << ' ';
    ht += bn;
    ++bn;
  }

  return 0;
}
