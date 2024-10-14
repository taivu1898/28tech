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
  }

  for (int i = 0; i < n; ++i) {
    int l = 0, nho = 0;
    for (int j = 0; j <= i; ++j) {
      if (arr[i] < arr[j]) {
        ++l;
      }
    }
    for (int j = i; j < n; ++j) {
      if (arr[i] > arr[j]) {
        ++nho;
      }
    }
    cout << l << ' ' << nho << endl;
  }

  return 0;
}
