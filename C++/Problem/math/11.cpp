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

  cout << 1 << ' ';
  for (int i = 2; i <= n; ++i) {
    if (snt(i)) {
      cout << i << ' ';
    } else {
      for (int j = 2; j <= sqrt(i); ++j) {
        if (i % j == 0) {
          cout << j << ' ';
          break;
        }
      }
    }
  }

  return 0;
}
