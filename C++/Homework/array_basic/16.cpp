#include <cmath>
#include <iostream>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;
const int MAX = 1000001;

int arr[MAX], mark[MAX];

int prime(int n) {
  for (int i = 2; i <= sqrt(n); ++i) {
    if (n % i == 0) {
      return false;
    }
  }

  return n > 1;
}

int palindrome(int n) {
  int f = 0, tmp = n;
  while (tmp) {
    f = f * 10 + tmp % 10;
    tmp /= 10;
  }

  return n == f;
}

int is_square_number(int n) {
  int sqrt_n = sqrt(n);
  return sqrt_n * sqrt_n == n;
}

int handle(int n) {
  int sum_digit = 0;
  while (n) {
    sum_digit += n % 10;
    n /= 10;
  }
  return prime(sum_digit);
}

int main() {
  cin.tie(nullptr)->sync_with_stdio(false);

  int n;
  cin >> n;

  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
  }

  int p = 0, pld = 0, sn = 0, foo = 0;
  for (int i = 0; i < n; ++i) {
    if (prime(arr[i])) {
      ++p;
    }
    if (palindrome(arr[i])) {
      ++pld;
    }
    if (is_square_number(arr[i])) {
      ++sn;
    }
    if (handle(arr[i])) {
      ++foo;
    }
  }

  cout << p << "\n" << pld << "\n" << sn << "\n" << foo << "\n";
  return 0;
}
