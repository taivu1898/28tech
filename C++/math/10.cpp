#include <cmath>
#include <iostream>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;

bool snt(int n) {
  for (int i = 2; i <= sqrt(n); ++i) {
    if (n % i == 0) {
      return false;
    }
  }

  return n > 1;
}

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  int n;
  cin >> n;

  ll ans = 1;
  while (n) {
    int p, e;
    cin >> p >> e;
    ans = ans % MOD * (e + 1) % MOD;
    ans %= ans;
  }

  return 0;
}