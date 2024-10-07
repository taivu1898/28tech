#include <cmath>
#include <iostream>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;
const int MAX = 1000001;

int arr[MAX];

int sumDigit(int n) {
  int s = 0;
  while (n) {
    s += n % 10;
    n /= 10;
  }

  return s;
}

int pttsnt(int n) {
  int s = 0;
  int tmp = n;
  for (int i = 2; i <= sqrt(n); ++i) {
    while (n % i == 0) {
      s += sumDigit(i);
      n /= i;
    }
  }

  if (tmp == n) {
    return 0;
  } else {
    s += sumDigit(n);
  }

  return s == sumDigit(tmp);
}

int main() {
  cin.tie(nullptr)->sync_with_stdio(false);

  int n;
  cin >> n;

  if (n < 10) {
    cout << "NO\n";
  } else {
    pttsnt(n) ? cout << "YES\n" : cout << "NO\n";
  }

  return 0;
}
