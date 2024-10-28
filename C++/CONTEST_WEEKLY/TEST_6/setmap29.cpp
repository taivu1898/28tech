#include <algorithm>
#include <cctype>
#include <iostream>
#include <set>
#include <unordered_map>
#include <vector>

using namespace std;
using ll = long long;

const int MOD = 100000007;

int main(int argc, char *argv[]) {
#ifndef ONLINE_JUDGE
  FILE *infile = nullptr, *outfile = nullptr;
  errno_t err1 = freopen_s(&infile, "input.txt", "r", stdin);
  errno_t err2 = freopen_s(&outfile, "output.txt", "w", stdout);
#endif

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  vector<char> c(n);
  for (int i = 0; i < n; ++i) {
    cin >> c[i];
  }

  set<char> uniqueChars;
  for (auto ch : c) {
    if (isalpha(ch)) {
      uniqueChars.insert(tolower(ch));
    }
  }

  cout << uniqueChars.size() << endl;
  for (auto i : uniqueChars) {
    cout << i << ' ';
  }

  return 0;
}
