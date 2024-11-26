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

  int n;
  cin >> n;
  map<string, int> mp;
  while (n--) {
    string name;
    cin >> name;
    mp[name]++;
  }

  int min = 10001, max = -1;
  for (auto i : mp) {
    if (min > i.second) {
      min = i.second;
    }
    if (max < i.second) {
      max = i.second;
    }
    cout << i.first << ' ' << i.second << endl;
  }

  for (auto i : mp) {
    if (i.second == min) {
      cout << i.first << ' ' << i.second << endl;
      break;
    }
  }

  cout << endl;
  for (auto i : mp) {
    if (i.second == max) {
      cout << i.first << ' ' << i.second << endl;
      break;
    }
  }

  return 0;
}