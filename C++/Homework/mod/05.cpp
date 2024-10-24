#include <iostream>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7; // Đây cũng là một số nguyên tố

ll fn(ll n) {
  ll f1 = 1, f2 = 1, fn = 1;

  if (n == 1 || n == 2) {
    return 1;
  }

  for (int i = 3; i <= n; ++i) {
    fn = f1 * 3 + f2 * 2 % MOD;
    fn %= MOD;
    f1 = f2;
    f2 = fn;
  }

  return fn;
}

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  int n;
  cin >> n;

  cout << fn(n) << endl;

  return 0;
}
