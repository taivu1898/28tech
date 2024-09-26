#include <iostream>

using namespace std;
using ll = long long;

int sum_digit(ll n) {
  int sum = 0;

  while (n) {
    sum += n % 10;
    n /= 10;
  }

  return sum;
}

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  int n;
  cin >> n;

  ll x;
  for (int i = 0; i < n; ++i) {
    cin >> x;
    cout << sum_digit(x) << ' ';
  }

  return 0;
}
