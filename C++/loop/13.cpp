#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  int n;
  cin >> n;

  ll tong = 0;
  for (int i = 1; i <= n; ++i) {
    tong += 2ll * i - 1;
  }

  cout << tong << endl;

  return 0;
}
