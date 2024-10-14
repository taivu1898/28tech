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

  int a[50000], cnt = 0, n;
  while (cin >> n) {
    a[cnt++] = n;
  }

  for (int i = cnt - 1; i >= 0; --i) {
    cout << a[i] << ' ';
  }

  return 0;
}
