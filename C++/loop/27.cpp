#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  ll n;
  cin >> n;

  while (n >= 10) {
    ll sum = 0;

    while (n != 0) {
      sum += n % 10;
      n /= 10;
    }

    n = sum;
  }

  cout << n << endl;

  return 0;
}
