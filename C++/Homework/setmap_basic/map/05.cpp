#include <iostream>
#include <map>
#include <vector>

using namespace std;
using ll = long long;

const int MOD = 10000007;

int main() {
#ifndef ONLINE_JUDGE
  FILE *infile = nullptr, *outfile = nullptr;
  errno_t err1 = freopen_s(&infile, "input.txt", "r", stdin);
  errno_t err2 = freopen_s(&outfile, "output.txt", "w", stdout);
#endif

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m;
  cin >> n >> m;
  vector<int> a(n);
  vector<int> b(m);
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }
  for (int i = 0; i < m; ++i) {
    cin >> b[i];
  }

  map<int, int> mp;
  for (auto i : b) {
    mp[i]++;
  }

  for (auto i : a) {
    cout << mp[i] << ' ';
  }

  return 0;
}
