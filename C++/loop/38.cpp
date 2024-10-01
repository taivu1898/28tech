#include <iostream>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  int n;
  cin >> n;

  for (int i = 1; i <= n; ++i) {
    for (int j = 1; j <= n; ++j) {
      if (i % 2 == 0) {
        if (j % 2 == 0) {
          cout << 0;
        } else {
          cout << 1;
        }
      } else {
        if (j % 2 == 0) {
          cout << 1;
        } else {
          cout << 0;
        }
      }
    }
    cout << endl;
  }

  return 0;
}
