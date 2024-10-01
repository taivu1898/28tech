#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  ll n;
  cin >> n;

  bool ok = true;
  if (n != 0) {
    while (n) {
      int digit = n % 10;
      if (digit % 2 == 0) {
        ok = false;
        break;
      }
      n /= 10;
    }
  } else {
    ok = false;
  }

  ok ? cout << "28tech\n" : cout << "29tech\n";

  return 0;
}
