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

  int n, x;
  cin >> n >> x;

  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
  }

  int index = -1;
  for (int i = 0; i < n; ++i) {
    if (arr[i] == x) {
      index = i;
      break;
    }
  }

  if (index != -1) {
    for (int i = index; i < n; ++i) {
      arr[i] = arr[i + 1];
    }
    --n;

    for (int i = 0; i < n; ++i) {
      cout << arr[i] << ' ';
    }
    cout << endl;
  } else {
    cout << "NOT FOUND\n";
  }

  return 0;
}
