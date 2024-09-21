#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  ll n;
  cin >> n;

  int sum = 0;
  while (n) {
    int digit = n % 10;
    sum += digit;
    n /= 10;
  }
  cout << sum << endl;

  return 0;
}
