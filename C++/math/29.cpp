#include <iostream>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;
const int MAX = 1000001;

int arr[MAX];

int c6(int n) {
  while (n) {
    int digit = n % 10;
    if (digit == 6) {
      return true;
    }
    n /= 10;
  }

  return false;
}

int sumDigit(int n) {
  int s = 0, f = 0, tmp = n;
  while (n) {
    f = f * 10 + n % 10;
    s = s + n % 10;
    n /= 10;
  }

  return f == tmp && s % 10 == 8;
}

int main() {
  cin.tie(nullptr)->sync_with_stdio(false);

  int a, b;
  cin >> a >> b;

  for (int i = a; i <= b; ++i) {
    if (c6(i) && sumDigit(i)) {
      cout << i << ' ';
    }
  }

  return 0;
}
