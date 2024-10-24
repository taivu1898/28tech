#include <iostream>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;

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
  char a[n];
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }
  char t[6] = {'2', '8', 't', 'e', 'c', 'h'};
  int j = 0;
  for (int i = 0; i < n; i += 2) {
    if (a[i] == t[j]) {
      ++j;
    }
    if (j == 6)
      break;
  }
  if (j == 6)
    cout << "28TECH";
  else
    cout << "HCET82";

  return 0;
}
