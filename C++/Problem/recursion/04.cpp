#include <iostream>

using namespace std;
using ll = long long;

const int MOD = 100000007;

ll sum(int n) {
  if (n == 1) {
    return -1;
  } else if (n % 2 != 0) {
    return -n + sum(n - 1);
  } else {
    return n + sum(n - 1);
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

  cout << sum(n) << endl;

  return 0;
}