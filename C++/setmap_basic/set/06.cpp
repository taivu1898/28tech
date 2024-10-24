#include <iostream>
#include <set>
#include <string>

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
  set<string> str;
  for (int i = 0; i < n; ++i) {
    string tmp;
    cin >> tmp;
    str.insert(tmp);
  }

  cout << str.size() << endl;
  for (auto i : str) {
    cout << i << ' ';
  }

  return 0;
}
