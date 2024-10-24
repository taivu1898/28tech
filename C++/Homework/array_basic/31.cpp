#include <iostream>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;
const int MAX = 1000001;
const int FIB_LIMIT = 93;

int arr[MAX], arr2[MAX], arr3[MAX], mark[MAX];
ll prefix[MAX], fibon[FIB_LIMIT];

void addValue(int des[], int src[], int start, int end, int &count) {
  for (int i = start; i < end; ++i) {
    des[count++] = src[i];
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m, p;
  cin >> n >> m >> p;

  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
  }

  for (int i = 0; i < m; ++i) {
    cin >> arr2[i];
  }

  int count = 0;
  addValue(arr3, arr, 0, p, count);
  addValue(arr3, arr2, 0, m, count);
  addValue(arr3, arr, p, n, count);

  for (int i = 0; i < count; ++i) {
    cout << arr3[i] << ' ';
  }

  return 0;
}
