#include <iostream>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;
const int MAX = 1000001;

int arr[MAX], mark[MAX];

int gcd(int a, int b) {
  if (b == 0) {
    return a;
  }

  return gcd(b, a % b);
}

int main() {
  cin.tie(nullptr)->sync_with_stdio(false);

  int n;
  cin >> n;

  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
  }

  ll ans = 0;
  for (int i = 0; i < n; ++i) {
    ans = gcd(arr[i], ans);
  }

  cout << ans << endl;

  return 0;
}
