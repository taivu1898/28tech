#include <cctype>
#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

const int MOD = 10000007;

vector<char> nhap() {
  vector<char> c;
  char tmp;
  while (cin >> tmp) {
    c.push_back(tmp);
  }

  return c;
}

vector<char> thaydoi(vector<char> c) {
  vector<char> ans;
  for (auto i : c) {
    if (islower(i)) {
      ans.push_back(toupper(i));
    } else if (isupper(i)) {
      ans.push_back(tolower(i));
    } else if (isdigit(i)) {
      ans.push_back(i);
    }
  }
  return ans;
}

void in(vector<char> c) {
  for (auto &i : c) {
    cout << i << ' ';
  }
}

int main() {
#ifndef ONLINE_JUDGE
  FILE *infile = nullptr, *outfile = nullptr;
  errno_t err1 = freopen_s(&infile, "input.txt", "r", stdin);
  errno_t err2 = freopen_s(&outfile, "output.txt", "w", stdout);
#endif

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  vector<char> v = nhap();
  vector<char> res = thaydoi(v);
  in(res);

  return 0;
}
