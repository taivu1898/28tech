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

  ll n;
  cin >> n;

  cout << sum_digit(n) << endl;

  return 0;
}
