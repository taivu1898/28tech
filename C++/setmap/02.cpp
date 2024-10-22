#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <set>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;
const int MAX = 1000001;
const int FIB_LIMIT = 93;

int arr[MAX], mark[MAX];
ll prefix[MAX], fibon[FIB_LIMIT];

int main(int argc, char *argv[]) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  set<int> nums;
  for (int i = 0; i < n; ++i) {
    int tmp;
    cin >> tmp;
    nums.insert(tmp);
  }

  int q;
  cin >> q;
  while (q--) {
    int tmp;
    cin >> tmp;
    if (nums.find(tmp) != nums.end()) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }

  return 0;
}
