#include <iostream>
#include <map>

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
  map<int, int> mp;
  for (int i = 1; i <= n; ++i) {
    for (int j = 1; j <= n; ++j) {
      int tmp;
      cin >> tmp;
      if (mp[tmp] == i - 1) {
        mp[tmp] = i;
      }
    }
  }

  bool ok = false;
  for (auto i : mp) {
    if (i.second > 1) {
      ok = true;
      cout << i.first << ' ';
    }
  }

  if (!ok) {
    cout << "NOT FOUND\n";
  }

  return 0;
}
