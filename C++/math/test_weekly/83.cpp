#include <iostream>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;
const int MAX = 1000001;

int arr[MAX];

int lt(ll n) {
  while (n > 1) {
    if (n % 7 != 0) {
      return false;
    }
    n /= 7;
  }
  return n == 1;
}

int main() {
  cin.tie(nullptr)->sync_with_stdio(false);

  ll n;
  cin >> n;

  lt(n) ? cout << "28tech\n" : cout << "29tech\n";

  return 0;
}
