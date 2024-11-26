#include <iostream>
#include <map>
#include <string>

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

  string str;
  map<string, int> mp;
  while (cin >> str) {
    mp[str]++;
  }

  for (auto i : mp) {
    cout << i.first << ' ' << i.second << endl;
  }
  return 0;
}