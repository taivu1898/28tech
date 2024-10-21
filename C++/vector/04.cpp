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
  for (auto itr = nums.begin() + l; itr <= nums.begin() + r; ++itr) {
    cout << *itr << ' ';
  }

  cout << endl;
  for (auto itr = nums.begin() + r; itr >= nums.begin() + l; --itr) {
    cout << *itr << ' ';
  }

  return 0;
}
