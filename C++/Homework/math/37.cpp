#include <iostream>

using namespace std;
using ll = long long;

const int MOD = 1000000007;
const int MAX = 1000001;

int arr[MAX];

ll pe(ll p, ll e) {
  ll ans = 1;
  p %= MOD;
  while (e) {
    if (e % 2 == 1) {
      ans = (ans % MOD * p % MOD) % MOD;
    }
    e /= 2;
    p *= (p % MOD);
    p %= MOD;
  }

  return ans;
}

int main() {
  cin.tie(nullptr)->sync_with_stdio(false);

  ll a, b;
  cin >> a >> b;

  cout << pe(a, b) << endl;

  return 0;
}
