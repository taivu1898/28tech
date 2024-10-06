#include <cmath>
#include <iostream>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;
const int MAX = 1000001;

int arr[MAX];

int snt(int n) {
  for (int i = 2; i <= sqrt(n); ++i) {
    if (n % i == 0) {
      return false;
    }
  }

  return n > 1;
}

int main() {
  cin.tie(nullptr)->sync_with_stdio(false);

  int n;
  cin >> n;

  ll s = 1;
  for (int i = 1; i <= n; ++i) {
    if (snt(i)) {
      s = s % MOD * i % MOD;
      s %= MOD;
    }
  }

  cout << s << endl;

  return 0;
}
