#include <iostream>
#include <map>
#include <vector>

using namespace std;
using ll = long long;

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
  map<int, int> nums;
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }

  for (int i = 0; i < m; ++i) {
    int tmp;
    cin >> tmp;
    nums[tmp]++;
  }

  for (auto i : a) {
    if (nums.count(i) > 0) {
      cout << "28tech" << ' ';
    } else {
      cout << "29tech" << ' ';
    }
  }

  return 0;
}
