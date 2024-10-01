#include <iostream>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  ll n;
  cin >> n;

  int max = 0;
  while (n >= 10) {
    if (n % 10 > max) {
      max = n % 10;
    }
    n /= 10;
  }

  n >= max ? cout << "YES\n" : cout << "NO\n";

  return 0;
}