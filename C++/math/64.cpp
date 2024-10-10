#include <iostream>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;
const int MAX = 1000001;

int arr[MAX];

int fibon(ll n) {
  if (n == 0 || n == 1 || n == 2) {
    return true;
  }
  ll a = 1, b = 1;
  for (int i = 2; i <= n; ++i) {
    ll c = a + b;
    if (c == n) {
      return true;
    }
    a = b;
    b = c;
  }

  return false;
}

int main() {
  cin.tie(nullptr)->sync_with_stdio(false);

  ll n;
  cin >> n;

  fibon(n) ? cout << "YES\n" : cout << "NO\n";

  return 0;
}
