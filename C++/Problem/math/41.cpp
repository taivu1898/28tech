#include <iostream>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;
const int MAX = 1000001;

int arr[MAX];

int palindrome(ll n) {
  ll tmp = n, f = 0;
  while (n) {
    f = f * 10 + n % 10;
    n /= 10;
  }

  return tmp == f;
}

int check(ll n) {
  ll cuoi = n % 10, f = 0;
  n /= 10;
  while (n >= 10) {
    f = f * 10 + n % 10;
    n /= 10;
  }

  return palindrome(f) && (cuoi * 2 == n || n * 2 == cuoi);
}

int main() {
  cin.tie(nullptr)->sync_with_stdio(false);

  ll n;
  cin >> n;

  check(n) ? cout << "YES\n" : cout << "NO\n";

  return 0;
}
