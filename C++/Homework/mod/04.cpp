#include <cmath>
#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  int n, m, k;
  cin >> n >> m >> k;

  ll mod = (ll)pow(10, k);

  ll ans = 1;
  for (int i = 0; i <= m; ++i) {
    ans = (ans % mod) * (n % mod);
    ans %= mod;
  }

  cout << ans << endl;

  return 0;
}
