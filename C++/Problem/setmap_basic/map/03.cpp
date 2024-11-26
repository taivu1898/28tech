#include <iostream>
#include <map>

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
  map<char, int> str;
  while (n--) {
    char tmp;
    cin >> tmp;
    str[tmp]++;
  }

  cout << str.size() << endl;

  char max = str.rbegin()->first;
  char min = str.begin()->first;

  char secondMax = min;
  char secondMin = max;
  for (auto p : str) {
    char c = p.first;
    if (c > secondMax && c < max) {
      secondMax = c;
    }
    if (c < secondMin && c > min) {
      secondMin = c;
    }
  }

  cout << max << ' ' << min << ' ' << secondMax << ' ' << secondMin << endl;

  return 0;
}
