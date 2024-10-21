#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

void rev(vector<int> &nums) {
  for (int i = 0; i < nums.size() / 2; ++i) {
    int tmp = nums[i];
    nums[i] = nums[nums.size() - i - 1];
    nums[nums.size() - i - 1] = tmp;
  }
}

void nhap(vector<int> &nums) {
  int n;
  cin >> n;
  while (n--) {
    int tmp;
    cin >> tmp;
    nums.push_back(tmp);
  }
}

void in(const vector<int> &nums) {
  for (auto itr = nums.begin(); itr != nums.end(); ++itr) {
    cout << *itr << ' ';
  }
}

int main() {
#ifndef ONLINE_JUDGE
  FILE *infile = nullptr, *outfile = nullptr;
  errno_t err1 = freopen_s(&infile, "input.txt", "r", stdin);
  errno_t err2 = freopen_s(&outfile, "output.txt", "w", stdout);
#endif

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  vector<int> nums;
  nhap(nums);
  rev(nums);
  in(nums);

  return 0;
}
