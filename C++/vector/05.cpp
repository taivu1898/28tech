#include <algorithm>
#include <iostream>
#include <iterator>
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

  int n;
  cin >> n;
  vector<int> nums;
  while (n--) {
    int tmp;
    cin >> tmp;
    nums.push_back(tmp);
  }

  int l, r;
  cin >> l >> r;

  reverse(nums.begin(), nums.end());
  for (auto i : nums) {
    cout << i << ' ';
  }
  cout << endl;

  reverse(nums.begin() + l, nums.begin() + r + 1);
  for (auto i : nums) {
    cout << i << ' ';
  }
  cout << endl;
  return 0;
}
