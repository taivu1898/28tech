#include <algorithm>
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

  int n, maxValue = -1;
  cin >> n;

  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
    mark[arr[i]]++;
    maxValue = max(arr[i], maxValue);
  }

  for (int i = 0; i < n; ++i) {
    if (mark[arr[i]] == 1) {
      cout << arr[i] << endl;
      return 0;
    }
  }

  int max = -1, index = -1;
  for (int i = 0; i <= maxValue; ++i) {
    if (max < mark[i]) {
      max = mark[i];
      index = i;
    }
  }

  cout << index << ' ' << max;

  return 0;
}
