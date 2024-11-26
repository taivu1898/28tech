#include <iostream>
#include <map>
#include <vector>

using namespace std;
using ll = long long;

const int MOD = 10000007;

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
  vector<int> v;
  map<int, int> mp;
  for (int i = 0; i < n; ++i) {
    int tmp;
    cin >> tmp;
    v.push_back(tmp);
    mp[tmp]++;
  }

  for (int i = 0; i < v.size(); ++i) {
    if (mp[v[i]] != 0) {
      cout << v[i] << ' ' << mp[v[i]] << endl;
      mp[v[i]] = 0;
    }
  }

  return 0;
}
