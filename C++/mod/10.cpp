#include <cmath>
#include <iostream>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  int n;
  cin >> n;

  ll ans = 1;
  for (int i = 1; i <= n; ++i) {
    ans = ans % MOD + (ll)pow(i, i) % MOD;
    ans %= MOD;
  }

  cout << ans << endl;

  return 0;
}
