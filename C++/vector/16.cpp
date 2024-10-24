#include <iostream>
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

  int n, q;
  cin >> n >> q;
  vector<vector<int>> maxtrix;
  for (int i = 0; i < n; ++i) {
    int m;
    cin >> m;
    vector<int> nums;
    for (int j = 0; j < m; ++j) {
      int tmp;
      cin >> tmp;
      nums.push_back(tmp);
    }
    maxtrix.push_back(nums);
  }

  while (q--) {
    int x, y;
    cin >> x >> y;
    cout << maxtrix[--x][--y] << endl;
  }
  return 0;
}
