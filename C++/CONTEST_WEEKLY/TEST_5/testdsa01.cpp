#include <iostream>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;
const int MAX = 1000001;

int arr[MAX], brr[MAX];

ll mod_pow(ll base, ll exp, ll mod) {
  ll result = 1;
  base = base % mod;
  while (exp > 0) {
    if (exp % 2 == 1) {
      result = (result * base) % mod;
    }
    base = (base * base) % mod;
    exp /= 2;
  }
  return result;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
  }
  for (int i = 0; i < n; ++i) {
    cin >> brr[i];
  }

  ll ans = 0;
  for (int i = 0; i < n; ++i) {
    ans = (ans + mod_pow(arr[i], brr[i], MOD)) % MOD;
  }

  cout << ans;

  return 0;
}
