#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

const int MOD = 10000007;

int lastPos(vector<int> &nums, int key) {
  int left = 0, right = nums.size() - 1, index = -1;
  while (left <= right) {
    int mid = left + (right - left) / 2;
    if (nums[mid] < key) {
      index = mid;
      left = mid + 1;
    } else {
      right = mid - 1;
    }
  }

  return index;
}

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
  vector<int> a, b;
  for (int i = 0; i < n; ++i) {
    int tmp;
    cin >> tmp;
    a.push_back(tmp);
  }
  for (int i = 0; i < m; ++i) {
    int tmp;
    cin >> tmp;
    b.push_back(tmp);
  }

  sort(b.begin(), b.end());

  for (int i = 0; i < n; ++i) {
    cout << lastPos(b, a[i]) + 1 << " ";
  }

  cout << endl;

  return 0;
}
