#include <iostream>
#include <map>
#include <vector>

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
  vector<int> v(n);
  for (int i = 0; i < n; ++i) {
    cin >> v[i];
  }

  map<int, int> mp;
  for (auto i : v) {
    mp[i]++;
  }

  int q;
  cin >> q;
  while (q--) {
    int o, value;
    cin >> o >> value;

    if (o == 1) {
      mp[value]++;
    } else if (o == 2) {
      if (mp.count(value)) {
        mp[value]--;
      }
    } else if (o == 3) {
      if (mp[value] >= 1) {
        cout << "YES\n";
      } else {
        cout << "NO\n";
      }
    }
  }

  return 0;
}
