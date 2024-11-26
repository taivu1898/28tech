#include <iostream>
#include <math.h>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;
const int MAX = 1000001;
const int FIB_LIMIT = 93;

int arr[MAX];
ll prefix[MAX], fibon[FIB_LIMIT], mark[28];

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
  for (int i = 1; i <= n; i++) {
    cin >> arr[i];
    mark[arr[i] % 28]++;
  }

  ll ans = 0;
  for (int i = 0; i <= 14; ++i) {
    if (i == 14 || i == 0) {
      ans = ans + (mark[i] * (mark[i] - 1)) / 2;
    } else {
      ans = ans + (mark[i] * mark[28 - i]);
    }
  }

  cout << ans << endl;
  return 0;
}
