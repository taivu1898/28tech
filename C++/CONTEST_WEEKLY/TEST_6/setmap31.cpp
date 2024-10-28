#include <cmath>
#include <iostream>
#include <map>
#include <vector>

using namespace std;
using ll = long long;

int snt(int n) {
  for (int i = 2; i <= sqrt(n); ++i) {
    if (n % i == 0) {
      return false;
    }
  }
  return n > 1;
}

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
  vector<int> v(n);
  for (int i = 0; i < n; ++i) {
    cin >> v[i];
  }

  map<int, int> mp;
  for (auto i : v) {
    if (snt(i)) {
      mp[i]++;
    }
  }

  for (auto i : mp) {
    cout << i.first << ' ' << i.second << endl;
  }

  return 0;
}
