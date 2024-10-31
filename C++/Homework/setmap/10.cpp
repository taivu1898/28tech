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
  vector<int> a(n);
  set<int> b;

  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }

  for (int i = 0; i < m; ++i) {
    int tmp;
    cin >> tmp;
    b.insert(tmp);
  }

  for (int i = 0; i < n; ++i) {
    if (b.find(a[i]) != b.end()) {
      cout << a[i] << ' ';
      b.erase(a[i]);
    }
  }

  return 0;
}
