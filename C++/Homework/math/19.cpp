#include <cmath>
#include <iostream>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;
const int MAX = 1000001;

int arr[MAX];

int pttsnt(int n) {
  for (int i = 2; i <= sqrt(n); ++i) {
    if (n % i == 0) {
      int e = 0;
      while (n % i == 0) {
        ++e;
        n /= i;
      }
      if (e < 2) {
        return false;
      }
    }
  }

  if (n > 1) {
    return false;
  }

  return true;
}

int main() {
  cin.tie(nullptr)->sync_with_stdio(false);

  int a, b;
  cin >> a >> b;
  for (int i = a; i <= b; ++i) {
    if (pttsnt(i)) {
      cout << i << ' ';
    }
  }

  return 0;
}
