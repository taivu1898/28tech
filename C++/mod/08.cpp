#include <iostream>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7; // Đây cũng là một số nguyên tố

ll fn(int n) {
  ll f1 = 2, f2 = 8, fn = 1;

  if (n == 1) {
    return f1;
  }

  if (n == 2) {
    return f2;
  }

  for (int i = 3; i <= n; ++i) {
    fn = (f2 * 8) % MOD + (f2 * 2) % MOD;
    fn %= MOD;
    f1 = f2;
    f2 = fn;
  }

  return fn;
}

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  int t;
  cin >> t;

  while (t--) {
  }

  return 0;
}
