#include <cmath>
#include <iostream>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;
const int MAX = 1000001;

int arr[MAX];

int is_prime(int n) {
  for (int i = 2; i <= sqrt(n); ++i) {
    if (n % i == 0) {
      return false;
    }
  }

  return n > 1;
}

int is_fibonacci_number(int n) {
  if (n == 0 || n == 1) {
    return true;
  } else {
    ll now = 1, cnue = 1;
    for (int i = 2; i <= 92; ++i) {
      ll ans = now + cnue;
      if (ans == n) {
        return true;
      }
      now = cnue;
      cnue = ans;
    }
  }

  return false;
}

bool sum_digit(int n) {
  int sum = 0;
  while (n) {
    sum += n % 10;
    n /= 10;
  }

  return is_fibonacci_number(sum);
}

int main() {
  cin.tie(nullptr)->sync_with_stdio(false);

  int n;
  cin >> n;

  for (int i = 2; i < n; ++i) {
    if (is_prime(i) && sum_digit(i)) {
      cout << i << ' ';
    }
  }
  cout << endl;

  return 0;
}
