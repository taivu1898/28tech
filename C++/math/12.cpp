#include <cmath>
#include <iostream>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;
const int MAX = 1000001;

int arr[MAX];

void pttsnt(ll n) {
  for (int i = 2; i <= sqrt(n); ++i) {
    int e = 0;
    if (n % i == 0) {
      while (n % i == 0) {
        ++e;
        n /= i;
      }
      cout << i << "^" << e;
      if (n > 1) {
        cout << " * ";
      }
    }
  }

  if (n > 1) {
    cout << n << "^1";
  }
}

int main() {
  cin.tie(nullptr)->sync_with_stdio(false);

  ll n;
  cin >> n;

  pttsnt(n);

  return 0;
}
