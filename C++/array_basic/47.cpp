#include <iostream>
#include <math.h>

using namespace std;
using ll = long long;

int a[1000001];

int snt(int n) {
  for (int i = 2; i <= sqrt(n); ++i) {
    if (n % i == 0) {
      return false;
    }
  }
  return n > 1;
}

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
    cin >> a[i];
  }

  a[n] = -1;
  ++n;
  int dem = 0, s = 0, ans = 0, sMax = 0, idx = -1;
  for (int i = 0; i < n; ++i) {
    if (snt(a[i])) {
      ++dem;
      s += a[i];
    } else {
      if (dem > ans) {
        ans = dem;
        sMax = s;
        idx = i - 1;
      } else if (dem == ans && s > sMax) {
        sMax = s;
        idx = i - 1;
      }

      dem = 0, s = 0;
    }
  }

  if (idx != -1) {
    cout << ans << endl;
    for (int i = idx - ans + 1; i <= idx; ++i) {
      cout << a[i] << ' ';
    }
  } else {
    cout << "NOT FOUND\n";
  }

  return 0;
}
