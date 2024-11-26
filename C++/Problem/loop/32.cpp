#include <iostream>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  int n;
  cin >> n;

  for (int i = 1; i <= n; ++i) {
    char c = 65;
    for (int j = 1; j <= i; ++j) {
      cout << (char)('A' + i - 1) << ' ';
      ++c;
    }
    cout << endl;
  }

  return 0;
}
