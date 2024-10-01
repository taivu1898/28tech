#include <iostream>

using namespace std;
using ll = long long;

ll palindrome(ll n) {
  ll rev = 0;
  while (n) {
    rev = rev * 10 + n % 10;
    n /= 10;
  }

  return rev;
}

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  ll n;
  cin >> n;

  int c2 = 0, c3 = 0, c5 = 0, c7 = 0;
  ll tmp = n;
  while (n) {
    int digit = n % 10;
    if (digit == 2) {
      ++c2;
    } else if (digit == 3) {
      ++c3;
    } else if (digit == 5) {
      ++c5;
    } else if (digit == 7) {
      ++c7;
    }
    n /= 10;
  }

  tmp = palindrome(tmp);
  while (tmp) {
    int digit = tmp % 10;
    if (digit == 2 && c2 > 0) {
      cout << 2 << ' ' << c2 << endl;
      c2 = 0;
    } else if (digit == 3 && c3 > 0) {
      cout << 3 << ' ' << c3 << endl;
      c3 = 0;
    } else if (digit == 5 && c5 > 0) {
      cout << 5 << ' ' << c5 << endl;
      c5 = 0;
    } else if (digit == 7 && c7 > 0) {
      cout << 7 << ' ' << c7 << endl;
      c7 = 0;
    }
    tmp /= 10;
  }

  return 0;
}
