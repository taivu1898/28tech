#include <iostream>
#include <ostream>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  int n;
  cin >> n;

  for (int i = 3; i <= n; i += 3) {
    cout << i << ' ';
  }
  cout << endl;

  for (int i = 0; i < n; ++i) {
    if (i % 3 == 0 && i % 5 == 0) {
      cout << i << ' ';
    }
  }
  cout << endl;

  for (int i = n;; i++) {
    if (i % 7 == 0) {
      cout << i << endl;
      break;
    }
  }

  for (int i = n; i >= 0; i--) {
    if (i % 9 == 0) {
      cout << i << endl;
      break;
    }
  }

  for (int i = 1; i <= 2 * n - 1; i += 2) {
    cout << i << ' ';
  }
  cout << endl;

  return 0;
}
