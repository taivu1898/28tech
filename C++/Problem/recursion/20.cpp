#include <cmath>
#include <iostream>

using namespace std;
using ll = long long;

const int MOD = 100000007;

ll handle(int n) {
  if (n == 1) {
    return 0;
  } else {
    int ans1 = 51, ans2 = 51, ans3 = 51;
    if (n % 2 == 0) {
      ans1 = handle(n / 2) + 1;
    }
    if (n % 3 == 0) {
      ans1 = handle(n / 3) + 1;
    }
    if (n > 1) {
      ans3 = handle(n - 1) + 1;
    }
    return fmin(ans1, fmin(ans2, ans3));
  }
}

int main(int argc, char *argv[]) {
#ifndef ONLINE_JUDGE
  FILE *infile = nullptr, *outfile = nullptr;
  errno_t err1 = freopen_s(&infile, "input.txt", "r", stdin);
  errno_t err2 = freopen_s(&outfile, "output.txt", "w", stdout);
#endif

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  cout << handle(n) << endl;

  return 0;
}
