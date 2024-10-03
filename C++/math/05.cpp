#include <cmath>
#include <iostream>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;

bool snt(int n) {
  for (int i = 2; i <= sqrt(n); ++i) {
    if (n % i == 0) {
      return false;
    }
  }

  return n > 1;
}

int main() {
  cin.tie(nullptr)->sync_with_stdio(false);

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    for (int i = 2; i <= n / 2; ++i) {
      if (snt(i) && snt(n - i)) {
        cout << i << ' ' << n - i << endl;
      }
    }
  }

  return 0;
}
