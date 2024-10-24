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

  for (int i = 0; i < n; ++i) {
    if ((i > 0 && 1ll * arr[i] * arr[i - 1] < 0) ||
        (i < n - 1 && 1ll * arr[i] * arr[i + 1] < 0)) {
      cout << arr[i] << ' ';
    }
  }

  cout << endl;

  return 0;
}
