#include <iostream>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;
int a[1000001];

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
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int chan = 0, le = 0;
  for (int i = 0; i < n; ++i) {
    if (a[i] % 2 == 0) {
      ++chan;
    } else {
      ++le;
    }
  }
  cout << 1ll * chan * (chan - 1) / 2 + 1ll * le * (le - 1) / 2;
  return 0;
}
