#include <iostream>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;
const int MAX = 1000001;

int arr[MAX], mark[MAX];
ll prefix[MAX];

int main() {
  cin.tie(nullptr)->sync_with_stdio(false);

  int n;
  cin >> n;

  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
  }

  for (int i = 0; i < n; ++i) {
    if (i == 0) {
      prefix[i] = arr[i];
    } else {
      prefix[i] = prefix[i - 1] + arr[i];
    }
  }

  int q;
  cin >> q;

  while (q--) {
    int l, r;
    cin >> l >> r;

    if (l - 1 == 0) {
      cout << prefix[r - 1] << endl;
    } else {
      cout << prefix[r - 1] - prefix[l - 2] << endl;
    }
  }

  return 0;
}
