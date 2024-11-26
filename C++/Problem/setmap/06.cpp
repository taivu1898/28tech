#include <iostream>
#include <set>
#include <utility>

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

  int n;
  cin >> n;
  set<pair<int, int>> se;
  for (int i = 0; i < n; ++i) {
    int x, y;
    cin >> x >> y;
    se.insert({x, y});
  }

  cout << se.size() << endl;

  return 0;
}
