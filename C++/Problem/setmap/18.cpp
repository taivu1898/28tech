#include <algorithm>
#include <climits>
#include <iostream>
#include <map>
#include <set>
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
  set<string> s;
  while (cin >> str) {
    s.insert(str);
  }

  cout << s.size() << endl;
  cout << *s.begin() << ' ' << *s.rbegin() << endl;

  return 0;
}