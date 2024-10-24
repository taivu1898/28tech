#include <iostream>
#include <map>
#include <utility>

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

  int n;
  cin >> n;
  map<pair<int, int>, int> mp;
  for (int i = 0; i < n; ++i) {
    int f, s;
    cin >> f >> s;
    mp[{f, s}]++;
  }

  for (auto i : mp) {
    cout << i.first.first << ' ' << i.first.second << ' ' << i.second << endl;
  }

  return 0;
}
