#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;
const int MAX = 1000001;

int arr[MAX];

int main() {
  cin.tie(nullptr)->sync_with_stdio(false);

  vector<int> v;

  int n;
  cin >> n;
  for (int i = 0; i < n; ++i) {
    int t;
    cin >> t;
    if (t == 1) {
      int x;
      cin >> x;
      v.push_back(x);
    } else if (t == 2) {
      if (!v.empty()) {
        v.pop_back();
      }
    }
  }

  if (v.size() == 0) {
    cout << "EMPTY\n";
    return 0;
  }

  for (auto i : v) {
    cout << i << ' ';
  }

  return 0;
}
