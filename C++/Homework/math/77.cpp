#include <iostream>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;
const int MAX = 1000001;

int arr[MAX];

void display_fibonacci_sequence(int n) {
  if (n == 1) {
    cout << 1 << endl;
  } else if (n == 2) {
    cout << 1 << endl << 1 << endl;
  } else {
    cout << 1 << endl << 1 << endl;
    ll a = 1, b = 1;
    for (ll i = 3; i <= n; ++i) {
      ll ans = a + b;
      cout << ans << endl;
      a = b;
      b = ans;
    }
  }
}
int main() {
  cin.tie(nullptr)->sync_with_stdio(false);

  int n;
  cin >> n;

  display_fibonacci_sequence(n);

  return 0;
}
