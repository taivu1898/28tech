#include <iostream>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;
const int MAX = 1000001;

int arr[MAX];

bool is_fibonacci_number(ll n) {
  if (n == 0 || n == 1) {
    return true;
  } else {
    ll a = 1, b = 1;
    for (int i = 2; i <= 92; ++i) {
      ll ans = a + b;
      if (ans == n) {
        return true;
      }
      a = b;
      b = ans;
    }
  }
  return false;
}

int main() {
  cin.tie(nullptr)->sync_with_stdio(false);

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    cout << (is_fibonacci_number(n) ? "YES\n" : "NO\n");
  }

  return 0;
}
