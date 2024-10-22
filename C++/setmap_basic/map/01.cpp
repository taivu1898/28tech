#include <iostream>
#include <map>

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
  map<int, int> nums;
  while (n--) {
    int tmp;
    cin >> tmp;
    nums[tmp]++;
  }

  cout << nums.size() << endl;
  for (auto i : nums) {
    cout << i.first << ' ';
  }

  return 0;
}
