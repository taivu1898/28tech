#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

const int MOD = 100000007;

int main(int argc, char *argv[]) {
#ifndef ONLINE_JUDGE
  FILE *infile = nullptr, *outfile = nullptr;
  errno_t err1 = freopen_s(&infile, "input.txt", "r", stdin);
  errno_t err2 = freopen_s(&outfile, "output.txt", "w", stdout);
#endif

  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;

  vector<int> a(n), b(m);

  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }

  for (int i = 0; i < m; ++i) {
    cin >> b[i];
  }

  sort(a.begin(), a.end());
  sort(b.begin(), b.end());

  int i = 0, j = 0;
  int count = 0;

  while (i < n && j < m) {
    if (a[i] > b[j]) {
      count++;
      j++;
    }
    i++;
  }

  cout << count << endl;
  return 0;
}
