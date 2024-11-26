#include <iomanip>
#include <iostream>
#include <iterator>
#include <map>
#include <string>
#include <utility>

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

  string ten;
  int tinChi, diem;
  map<string, pair<int, int>> mp;
  while (cin >> ten >> tinChi >> diem) {
    mp[ten].first += (tinChi * diem);
    mp[ten].second += tinChi;
  }

  for (auto it = mp.rbegin(); it != mp.rend(); ++it) {
    cout << it->first << " : " << fixed << setprecision(2)
         << (double)it->second.first / it->second.second << endl;
  }

  return 0;
}