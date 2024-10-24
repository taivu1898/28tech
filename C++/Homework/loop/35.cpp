#include <iostream>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  int n;
  cin >> n;

  for (int i = n; i >= 1; --i) {
    for (int j = 1; j <= n - i; ++j) {
      cout << ' ' << ' ';
    }
    for (int j = 1; j <= 2 * i - 1; ++j) {
      cout << "*" << ' ';
    }
    cout << endl;
  }

  return 0;
}
