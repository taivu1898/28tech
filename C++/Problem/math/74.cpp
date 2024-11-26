#include <cmath>
#include <iostream>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;
const int MAX = 1000001;

int arr[MAX];

void pttsnt(ll n) {
  ll max = 0;
  ll coso = 0;
  for (int i = 2; i <= sqrt(n); ++i) {
    int e = 0;
    while (n % i == 0) {
      ++e;
      n /= i;
    }
    if (e > max) {
      max = e;
      coso = i;
    }
  }
  if (n > 1 && max < 1) {
    max = 1;
    coso = n;
  }

  cout << coso << ' ' << max << endl;
}

int main() {
  cin.tie(nullptr)->sync_with_stdio(false);

  ll n;
  cin >> n;

  pttsnt(n);

  return 0;
}
