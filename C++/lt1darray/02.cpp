#include <iostream>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;
const int MAX = 1000001;

int arr[MAX];

int main() {
  cin.tie(nullptr)->sync_with_stdio(false);

  int n;
  cin >> n;

  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
  }

  ll ans = 1;
  for (int i = 0; i < n; ++i) {
    ans = ans % MOD * arr[i] % MOD;
    ans %= MOD;
  }

  cout << ans << endl;

  return 0;
}
