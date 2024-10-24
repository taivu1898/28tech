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

  int max = arr[0];
  cout << max << ' ';
  for (int i = 0; i < n; ++i) {
    if (arr[i] > max) {
      cout << arr[i] << ' ';
      max = arr[i];
    }
  }

  return 0;
}
