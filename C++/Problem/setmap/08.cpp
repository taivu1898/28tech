#include <iostream>
#include <set>

using namespace std;
using ll = long long;

const int MOD = 100000007;

int main(int argc, char *argv[]) {
#ifndef ONLINE_JUDGE
  FILE *infile = nullptr, *outfile = nullptr;
  errno_t err1 = freopen_s(&infile, "input.txt", "r", stdin);
  errno_t err2 = freopen_s(&outfile, "output.txt", "w", stdout);
#endif

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  set<int> s;

  for (int i = 0; i < n; ++i) {
    int value;
    cin >> value;
    s.insert(value);
  }

  int q;
  cin >> q;

  for (int i = 0; i < q; ++i) {
    int operation;
    cin >> operation;

    if (operation == 1) {
      int x;
      cin >> x;
      s.insert(x);
    } else if (operation == 2) {
      int x;
      cin >> x;
      s.erase(x);
    } else if (operation == 3) {
      if (!s.empty()) {
        cout << *s.begin() << endl;
      }
    } else if (operation == 4) {
      if (!s.empty()) {
        cout << *s.rbegin() << endl;
      }
    }
  }
  return 0;
}
