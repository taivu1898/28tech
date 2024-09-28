#include <iostream>

using namespace std;
using ll = long long;

const ll MOD = 1000000007;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  int n;
  cin >> n;

  ll ans = 1;
  while (n--) {
    int t;
    cin >> t;

    ans *= (t % MOD);
    ans %= MOD;
  }

  cout << ans << endl;

  return 0;
}
