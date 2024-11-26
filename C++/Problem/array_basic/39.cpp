#include <iostream>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;
const int MAX = 1000001;
const int FIB_LIMIT = 93;

int arr[MAX], mark[MAX];
ll prefix[MAX], fibon[FIB_LIMIT];

int main() {
#ifndef ONLINE_JUDGE
  FILE *infile = nullptr, *outfile = nullptr;
  errno_t err1 = freopen_s(&infile, "input.txt", "r", stdin);
  errno_t err2 = freopen_s(&outfile, "output.txt", "w", stdout);
#endif
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
  }

  int cnt1 = 0, cnt0 = 0;
  for (int i = 0; i < n; ++i) {
    if (arr[i] == 1) {
      ++cnt1;
    } else {
      if (cnt1 > 0) {
        cout << cnt1 << ' ';
      }
      cnt1 = 0;
    }
  }
  if (cnt1 > 0) {
    cout << cnt1 << endl;
  }
  for (int i = 0; i < n; ++i) {
    if (arr[i] == 0) {
      ++cnt0;
    } else {
      if (cnt0 > 0) {
        cout << cnt0 << ' ';
      }
      cnt0 = 0;
    }
  }
  if (cnt0 > 0) {
    cout << cnt0 << endl;
  }
  return 0;
}
