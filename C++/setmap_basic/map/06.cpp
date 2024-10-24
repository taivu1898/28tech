#include <iostream>
#include <map>
#include <string>
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
  vector<string> str;
  for (int i = 0; i < n; ++i) {
    string tmp;
    cin >> tmp;
    str.push_back(tmp);
  }

  map<string, int> mp;
  for (auto i : str) {
    mp[i]++;
  }

  cout << mp.size() << endl;
  for (auto i : mp) {
    cout << i.first << ' ';
  }

  return 0;
}
