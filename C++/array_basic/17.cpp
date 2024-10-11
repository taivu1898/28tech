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

  int ok = 1;
  for (int i = 0; i < n / 2; ++i) {
    if (arr[i] != arr[n - i - 1]) {
      ok = 0;
      break;
    }
  }

  cout << (ok ? "YES\n" : "NO\n");

  return 0;
}
