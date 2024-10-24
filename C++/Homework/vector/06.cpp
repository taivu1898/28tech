#include <algorithm>
#include <iostream>
#include <numeric>
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

  cout << *min_element(nums.begin(), nums.end()) << endl;
  cout << *max_element(nums.begin(), nums.end()) << endl;
  cout << accumulate(nums.begin(), nums.end(), 0) << endl;
  return 0;
}
