#include <iostream>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;
const int MAX = 1000001;
const int FIB_LIMIT = 93;

int arr[MAX], mark[MAX];
ll prefix[MAX], fibon[FIB_LIMIT];

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, x, k;
  cin >> n >> x >> k;

  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
  }

  ++n;
  for (int i = n - 1; i >= k; --i) {
    arr[i] = arr[i - 1];
  }

  arr[k - 1] = x;
  for (int i = 0; i < n; ++i) {
    cout << arr[i] << ' ';
  }

  cout << endl;

  return 0;
}
