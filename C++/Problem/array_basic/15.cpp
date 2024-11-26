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

  int max = -1, max2 = -1;
  for (int i = 0; i < n; ++i) {
    if (arr[i] > max) {
      max2 = max;
      max = arr[i];
    } else if (arr[i] > max2) {
      max2 = arr[i];
    }
  }

  cout << max << ' ' << max2 << endl;

  return 0;
}
