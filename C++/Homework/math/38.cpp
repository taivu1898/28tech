#include <cmath>
#include <iostream>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;
const int MAX = 1000001;

int arr[MAX];

ll legendre(ll n, ll p) {
  ll ans = 0;

  while (n >= p) {
    ans += n / p;
    n /= p;
  }

  return ans;
}

int isPrime(int n) {
  for (int i = 2; i <= sqrt(n); ++i) {
    if (n % i == 0) {
      return false;
    }
  }

  return n > 1;
}

ll cntDivisor(int n) {
  ll ans = 1;
  for (ll i = 1; i <= n; ++i) {
    if (isPrime(i)) {
      ans = (ans % MOD * (legendre(n, i) + 1) % MOD) % MOD;
    }
  }
  return ans;
}

int main() {
  cin.tie(nullptr)->sync_with_stdio(false);

  int n;
  cin >> n;

  cout << cntDivisor(n) << endl;

  return 0;
}
