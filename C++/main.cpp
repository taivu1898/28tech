#include <cmath>
#include <iostream>
#include <set>
#include <utility>

using namespace std;
using ll = long long;

const int MOD = 100000007;
const int MAX = 501;

int a[MAX][MAX];

int snt(int n) {
  for (int i = 2; i <= sqrt(n); ++i) {
    if (n % i == 0) {
      return false;
    }
  }

  return n > 1;
}

int main(int argc, char *argv[]) {
#ifndef ONLINE_JUDGE
  FILE *infile = nullptr, *outfile = nullptr;
  errno_t err1 = freopen_s(&infile, "input.txt", "r", stdin);
  errno_t err2 = freopen_s(&outfile, "output.txt", "w", stdout);
#endif

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, u, v;
  cin >> n;
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      cin >> a[i][j];
    }
  }

  cout << "Pattern 1:\n";
  for (int i = 1; i < n; ++i) {
    for (int j = 1; j < n; ++j) {
      swap(a[i][j + 1], a[i + 1][j]);
    }
  }

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      cout << a[i][j] << ' ';
    }
    cout << endl;
  }

  return 0;
}
