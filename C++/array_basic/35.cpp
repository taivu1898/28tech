#include <iostream>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;
const int MAX = 1000001;
const int FIB_LIMIT = 93;

int arr[MAX], arr2[MAX], mark[MAX];
ll prefix[MAX], fibon[FIB_LIMIT];

int main(int argc, char *argv[]) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
  }

  for (int i = 0; i < n - 1; ++i) {
    cin >> arr2[i];
  }

  int ans = arr[0];
  for (int i = 1; i < n; ++i) {
    if (arr2[i - 1] == 1) {
      ans += arr[i];
    } else {
      ans -= arr[i];
    }
  }

  cout << ans << endl;
  return 0;
}