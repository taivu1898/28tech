#include <iostream>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  int n;
  cin >> n;

  for (int i = 1; i <= n; ++i) {
    for (int j = 1; j <= n - i; ++j) {
      cout << ' ' << ' ';
    }
    int dem = i;
    for (int j = 1; j <= i - 1; ++j) {
      cout << dem << ' ';
      ++dem;
    }
    cout << 2 * i - 1 << ' ';

    dem = 2 * i - 2;
    for (int j = 1; j <= i - 1; ++j) {
      cout << dem << ' ';
      --dem;
    }
    cout << endl;
  }

  return 0;
}
