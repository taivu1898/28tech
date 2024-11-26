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

  int n;
  cin >> n;

  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
    mark[arr[i]]++;
  }

  for (int i = 0; i < n; ++i) {
    if (mark[arr[i]] > 0) {
      cout << arr[i] << ' ' << mark[arr[i]] << endl;
      mark[arr[i]] = 0;
    }
  }

  return 0;
}
