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

  for (int i = 0; i < n; ++i) {
    int ok = 1;
    for (int j = i + 1; j < n; ++j) {
      if (arr[j] > arr[i]) {
        ok = 0;
      }
    }
    if (ok) {
      cout << arr[i] << ' ';
    }
  }

  return 0;
}
