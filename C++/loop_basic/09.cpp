#include <iostream>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  ll n;
  cin >> n;

  if (n == 0) {
    cout << "28tech\n";
    return 0;
  }

  int chan = 0, le = 0;

  while (n) {
    int r = n % 10;
    if (r % 2 == 0) {
      ++chan;
    } else {
      ++le;
    }
    n /= 10;
  }

  le < chan ? cout << "28tech\n" : cout << "29tech\n";

  return 0;
}
