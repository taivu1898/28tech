#include <iostream>

using namespace std;
using ll = long long;

const ll MOD = 1000000007;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  int n;
  cin >> n;

  ll giai_thua = 1;
  for (int i = 1; i <= n; ++i) {
    giai_thua *= (i % MOD);
    giai_thua %= MOD;

    cout << giai_thua << endl;
  }

  return 0;
}
