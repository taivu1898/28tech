#include <iostream>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  int t;
  cin >> t;

  ll ans = 1;
  while (t--) {
    int p, e;
    cin >> p >> e;

    ans = (ans * (e + 1)) % MOD;
  }

  cout << ans << endl;

  return 0;
}
