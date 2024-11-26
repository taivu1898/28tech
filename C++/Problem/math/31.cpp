#include <cmath>
#include <iostream>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;
const int MAX = 1000001;

int arr[MAX];

ll Euler(ll n) {
  ll ans = n;
  for (int i = 2; i <= sqrt(n); ++i) {
    if (n % i == 0) {
      ans = ans - ans / i;
      while (n % i == 0) {
        n /= i;
      }
    }
  }

  if (n > 1) {
    ans -= ans / n;
  }

  return ans;
}

int main() {
  cin.tie(nullptr)->sync_with_stdio(false);

  ll n;
  cin >> n;

  cout << Euler(n) << endl;

  return 0;
}
