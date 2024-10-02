#include <iostream>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;

int trailingZeroes(ll n) {
  int ans = 0;
  while (n) {
    n /= 5;
    ans = ans % MOD + n % MOD;
  }
  return ans % MOD;
}

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  ll n;
  cin >> n;

  cout << trailingZeroes(n) << endl;

  return 0;
}
