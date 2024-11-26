#include <iostream>
#include <set>

using namespace std;
using ll = long long;

const int MOD = 100000007;

int main(int argc, char *argv[]) {
#ifndef ONLINE_JUDGE
  FILE *infile = nullptr, *outfile = nullptr;
  infile = freopen("input", "r", stdin);
  outfile = freopen("output", "w", stdout);
#endif

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  multiset<int> ms;
  for (int i = 0; i < n; ++i) {
    int tmp;
    cin >> tmp;
    ms.insert(tmp);
  }

  int T;
  cin >> T;
  while (T--) {
    int opt, x;
    cin >> opt >> x;
    if (opt == 1) {
      ms.insert(x);
    } else if (opt == 2) {
      if (ms.find(x) != ms.end()) {
        ms.erase(ms.find(x));
      }
    } else if (opt == 3) {
      auto it = ms.lower_bound(x);
      if (it != ms.end()) {
        cout << *it << endl;
      } else {
        cout << -1 << endl;
      }
    } else if (opt == 4) {
      auto it = ms.upper_bound(x);
      if (it == ms.begin()) {
        cout << -1 << endl;
      } else {
        cout << *--it << endl;
      }
    }
  }

  return 0;
}