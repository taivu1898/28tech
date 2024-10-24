#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  int n;
  cin >> n;

  ll giai_thua = 1;
  ll tong = 0;

  for (int i = 1; i <= n; ++i) {
    giai_thua *= i;
    tong += giai_thua;
  }

  cout << tong << endl;

  return 0;
}
