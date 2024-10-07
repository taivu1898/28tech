#include <iostream>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;
const int MAX = 1000001;

int arr[MAX];

int main() {
  cin.tie(nullptr)->sync_with_stdio(false);

  ll n, p;

  cin >> n >> p;

  ll e = 0;
  for (ll i = p; i <= n; i *= p) {
    e += n / i;
  }

  cout << e << endl;

  return 0;
}
