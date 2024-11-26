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

  int min = arr[0], max = arr[0];
  for (int i = 1; i < n; ++i) {
    if (arr[i] < min) {
      min = arr[i];
    }
    if (arr[i] > max) {
      max = arr[i];
    }
  }

  for (int i = n - 1; i >= 0; --i) {
    if (min == arr[i]) {
      cout << i << ' ';
      break;
    }
  }

  for (int i = 0; i < n; ++i) {
    if (arr[i] == max) {
      cout << i << ' ';
      break;
    }
  }

  return 0;
}
