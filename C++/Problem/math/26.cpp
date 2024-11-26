#include <cmath>
#include <iostream>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;
const int MAX = 1000001;

int arr[MAX];

int snt(ll n) {
  for (int i = 2; i <= sqrt(n); ++i) {
    if (n % i == 0) {
      return false;
    }
  }

  return n > 1;
}

int shh(ll n) {
  for (int i = 1; i <= 32; ++i) {
    ll tmp = pow(2, i) - 1;
    if (snt(i) && snt(tmp)) {
      ll hh = pow(2, i - 1) * (pow(2, i) - 1);
      if (n == hh) {
        return true;
      }
    }
  }

  return false;
}

int main() {
  cin.tie(nullptr)->sync_with_stdio(false);

  ll n;
  cin >> n;

  shh(n) ? cout << "YES\n" : cout << "NO\n";

  return 0;
}
