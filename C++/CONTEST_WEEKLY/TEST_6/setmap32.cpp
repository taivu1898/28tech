#include <algorithm>
#include <iostream>
#include <iterator>
#include <set>
#include <vector>

using namespace std;
using ll = long long;

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
  vector<char> v(n);
  for (int i = 0; i < n; ++i) {
    cin >> v[i];
  }

  set<char> uChars(v.begin(), v.end());
  vector<char> b(uChars.begin(), uChars.end());

  sort(b.rbegin(), b.rend());
  cout << b.size() << endl;
  for (char c : b) {
    cout << c << ' ';
  }
  cout << endl;

  return 0;
}
