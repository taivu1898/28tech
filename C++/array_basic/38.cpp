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

  prefix[0] = arr[0];
  for (int i = 1; i < n; i++) {
    prefix[i] = prefix[i - 1] + arr[i];
  }

  for (int i = 1; i < n; ++i) {
    if (i == 1) {
      cout << prefix[i] << ' ';
    } else {
      cout << prefix[i] - prefix[i - 2] << ' ';
    }
  }
  cout << endl;

  for (int i = 2; i < n; ++i) {
    if (i == 2) {
      cout << prefix[i] << ' ';
    } else {
      cout << prefix[i] - prefix[i - 3] << ' ';
    }
  }
  cout << endl;

  for (int i = 3; i < n; ++i) {
    if (i == 3) {
      cout << prefix[i] << ' ';
    } else {
      cout << prefix[i] - prefix[i - 4] << ' ';
    }
  }
  return 0;
}
