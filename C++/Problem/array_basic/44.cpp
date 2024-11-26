#include <iostream>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;
const int MAX = 1000001;
const int FIB_LIMIT = 93;

int arr[MAX], mark[10];
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

  int cnt = 0;
  for (int i = 0; i < n; ++i) {
    for (int j = i; j < n; ++j) {
      int e = 0, o = 0;
      for (int k = i; k <= j; ++k) {
        if (arr[k] % 2 == 0) {
          ++e;
        } else {
          ++o;
        }
      }
      if (o == e) {
        ++cnt;
      }
    }
  }

  cout << cnt << endl;

  return 0;
}
