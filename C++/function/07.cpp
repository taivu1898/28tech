#include <iostream>

using namespace std;
using ll = long long;

bool check(ll n) {
  int sum = 0;

  while (n) {
    sum += n % 10;
    n /= 10;
  }

  return sum % 10 == 8;
}

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  ll x;
  cin >> x;

  if (check(x)) {
    cout << "28tech\n";
  } else {
    cout << "29tech\n";
  }

  return 0;
}
