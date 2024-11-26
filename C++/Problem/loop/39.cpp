#include <iostream>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  int n;
  cin >> n;

  for (int i = 1; i <= n; ++i) {
    char c;
    if (i % 2 == 1) {
      c = 'A' + i - 1;
    } else {
      c = 'a' + i - 1;
    }
    for (int j = 1; j <= n; ++j) {
      cout << c;
      ++c;
    }
    cout << endl;
  }

  return 0;
}
