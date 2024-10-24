#include <cmath>
#include <iostream>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;
const int MAX = 1000001;

int arr[MAX];

ll cntPrimeDivisor(ll n) {
  ll ans = 0;
  for (ll i = 2; i <= sqrt(n); ++i) {
    if (n % i == 0) {
      ++ans;
      while (n % i == 0) {
        n /= i;
      }
    }
  }

  if (n > 1) {
    ++ans;
  }
  return ans;
}

int main() {
  cin.tie(nullptr)->sync_with_stdio(false);

  ll n;
  cin >> n;

  cout << cntPrimeDivisor(n) << endl;
  return 0;
}
