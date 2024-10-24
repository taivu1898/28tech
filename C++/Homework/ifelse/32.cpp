#include <algorithm>
#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  int k2, k3, k5, k6;
  cin >> k2 >> k3 >> k5 >> k6;

  int mink256 = min({k2, k5, k6});

  k2 -= mink256;
  int mink32 = min({k2, k3});

  ll ans = 256ll * mink256 + 32ll * mink32;
  cout << ans << endl;

  return 0;
}
