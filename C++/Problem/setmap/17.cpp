#include <algorithm>
#include <climits>
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

  char c;
  map<char, int> mp;
  while (cin >> c) {
    mp[c]++;
  }

  int min = INT_MAX, max = -1;
  for (auto i : mp) {
    if (i.second < min) {
      min = i.second;
    }
    if (i.second > max) {
      max = i.second;
    }
  }

  for (auto i : mp) {
    if (i.second == max) {
      cout << i.first << ' ' << i.second << endl;
      break;
    }
  }

  for (auto it = mp.rbegin(); it != mp.rend(); ++it) {
    if (it->second == min) {
      cout << it->first << ' ' << it->second << endl;
      break;
    }
  }

  cout << mp.size() << endl;

  return 0;
}