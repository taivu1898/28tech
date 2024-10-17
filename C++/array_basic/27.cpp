#include <iostream>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;
const int MAX = 1000001;
const int FIB_LIMIT = 93;

int arr[MAX], mark[MAX];
ll prefix[MAX], fibon[FIB_LIMIT];

int main(int argc, char *argv[]) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  int maxValue = -1;
  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
    mark[arr[i]]++;
    maxValue = max(arr[i], maxValue);
  }

  for (int i = 0; i <= maxValue; ++i) {
    if (mark[i] > 0) {
      cout << i << ' ' << mark[i] << endl;
    }
  }

  return 0;
}