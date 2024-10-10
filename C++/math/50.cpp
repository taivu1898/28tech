#include <iostream>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;
const int MAX = 1000001;

int arr[MAX];

ll nCk(ll n, ll k) {
  ll ans = 1;

  for (int i = 1; i <= k; ++i) {
    ans = ans * (n - k + i);
    ans /= i;
  }

  return ans;
}

int main() {
  cin.tie(nullptr)->sync_with_stdio(false);

  ll n;
  cin >> n;

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j <= i; ++j) {
      cout << nCk(i, j) << ' ';
    }
    cout << endl;
  }

  return 0;
}
