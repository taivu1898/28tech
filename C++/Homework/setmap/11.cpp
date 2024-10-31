#include <algorithm>
#include <iostream>
#include <set>
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

  set<int> a, b;

  for (int i = 0; i < n; ++i) {
    int tmp;
    cin >> tmp;
    a.insert(tmp);
  }

  for (int i = 0; i < m; ++i) {
    int tmp;
    cin >> tmp;
    b.insert(tmp);
  }

  for (auto i : a) {
    if (b.find(i) == b.end()) {
      cout << i << ' ';
    }
  }

  return 0;
}
