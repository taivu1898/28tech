#include <iostream>
#include <utility>
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
  vector<pair<pair<int, int>, int>> Oxyz;
  while (n--) {
    int x, y, z;
    cin >> x >> y >> z;
    Oxyz.push_back(make_pair(make_pair(x, y), z));
  }

  vector<ll> s;
  for (auto item : Oxyz) {
    ll sum = 0;
    sum = item.first.first + item.first.second + item.second;
    s.push_back(sum);
  }

  for (auto item : s) {
    cout << item << ' ';
  }

  return 0;
}
