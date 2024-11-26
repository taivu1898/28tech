#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;
const int MAX = 1000001;
const int FIB_LIMIT = 93;

int arr[MAX], mark[MAX];
ll prefix[MAX], fibon[FIB_LIMIT];

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
  for (int i = 0; i < n; ++i) {
    int tmp;
    cin >> tmp;
    nums.push_back(tmp);
  }

  cin >> n;
  while (n--) {
    int tt;
    cin >> tt;
    if (tt == 1) {
      int p, value;
      cin >> p >> value;
      if (p >= 0 && p <= nums.size()) {
        nums.insert(nums.begin() + p, value);
      }
    } else if (tt == 2) {
      int p;
      cin >> p;
      if (p >= 0 && p <= nums.size()) {
        if (!nums.empty()) {
          nums.erase(nums.begin() + p);
        }
      }
    }
  }

  if (!nums.empty()) {
    for (auto itr = nums.begin(); itr != nums.end(); ++itr) {
      cout << *itr << ' ';
    }
  } else {
    cout << "EMPTY\n";
  }

  return 0;
}
