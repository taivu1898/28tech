#include <algorithm>
#include <iostream>
#include <set>

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
  set<char> c;
  while (n--) {
    char tmp;
    cin >> tmp;
    c.insert(tmp);
  }

  cout << c.size() << endl;
  char max = *max_element(c.begin(), c.end());
  char min = *min_element(c.begin(), c.end());

  char secondMax = min, secondMin = max;

  for (char x : c) {
    if (x > secondMax && x < max) {
      secondMax = x;
    }
    if (x < secondMin && x > min) {
      secondMin = x;
    }
  }

  cout << max << ' ' << min << ' ' << secondMax << ' ' << secondMin << endl;

  return 0;
}
