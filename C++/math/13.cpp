#include <iostream>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;
const int MAX = 1000001;

// legendre
ll bac(ll n, int p) {
  ll ans = 0;

  for (ll i = p; i <= n; i *= p) {
    ans += n / i;
  }

  return ans;
}

int main() {
  cin.tie(nullptr)->sync_with_stdio(false);

  ll n;
  int p;

  cin >> n >> p;

  cout << bac(n, p) << endl;

  return 0;
}
