#include <iostream>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;
const int MAX = 1000001;

int arr[MAX], mark[MAX];

int main() {
  cin.tie(nullptr)->sync_with_stdio(false);

  int n;
  cin >> n;

  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
  }

  ll s = 0, m = 1;
  for (int i = 0; i < n; ++i) {
    s = (s % MOD + arr[i] % MOD) % MOD;
    m = (m % MOD * arr[i] % MOD) % MOD;
  }

  cout << s << endl << m << endl;

  return 0;
}
