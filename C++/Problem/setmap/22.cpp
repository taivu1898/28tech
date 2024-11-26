#include <iostream>
#include <set>

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
  multiset<int> ms;
  for (int i = 0; i < n; ++i) {
    int c;
    cin >> c;
    ms.insert(c);
    cout << ms.count(c) << ' ';
  }

  return 0;
}
