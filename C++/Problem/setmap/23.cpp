#include <iostream>
#include <map>

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
  map<int, int> mp;
  for (int i = 0; i < n; ++i) {
    int tmp;
    cin >> tmp;
    mp[tmp]++;
  }

  for (auto i : mp) {
    if (i.second % 2 == 0) {
      cout << i.first << ' ' << i.second << endl;
    }
  }
  cout << endl;

  for (auto it = mp.rbegin(); it != mp.rend(); ++it) {
    if (it->second % 2 == 0) {
      cout << it->first << ' ' << it->second << endl;
    }
  }

  return 0;
}