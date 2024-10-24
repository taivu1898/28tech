#include <cmath>
#include <iostream>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;
const int MAX = 1000001;

int arr[MAX];

int pld(int n) {
  int tmp = n, ans = 0;
  while (tmp) {
    ans = ans * 10 + tmp % 10;
    tmp /= 10;
  }

  return ans == n;
}

int pttsnt(int n) {
  int e = 0;
  for (int i = 2; i <= sqrt(n); ++i) {
    if (n % i == 0) {
      ++e;
      while (n % i == 0) {
        n /= i;
      }
    }
  }

  if (n > 1) {
    ++e;
  }

  return e >= 3;
}

int main() {
  cin.tie(nullptr)->sync_with_stdio(false);

  int a, b;
  cin >> a >> b;

  int ok = 0;
  for (int i = a; i <= b; ++i) {
    if (pld(i) && pttsnt(i)) {
      ok = 1;
      cout << i << ' ';
    }
  }

  if (!ok) {
    cout << -1;
  }

  return 0;
}
