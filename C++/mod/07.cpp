#include <iostream>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;

ll binpow(ll a, ll n) {
  ll ans = 1;
  while (n != 0) {
    if (n % 2 == 1) {
      ans *= (a % MOD);
      ans %= MOD;
    }
    n /= 2;
    a *= (a % MOD);
    a %= MOD;
  }
  return ans;
}

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  ll a, b;
  cin >> a >> b;

  a %= MOD;

  cout << binpow(a, b) << endl;

  return 0;
}
