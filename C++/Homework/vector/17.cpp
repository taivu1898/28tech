#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

const int MOD = 10000007;

vector<char> convert_number(ll n) {
  vector<char> bin;
  if (n == 0) {
    bin.push_back('0');
    return bin;
  }

  for (int i = 0; i < 64; ++i) {
    bin.push_back((n % 2) ? '1' : '0');
    n /= 2;
  }

  reverse(bin.begin(), bin.end());
  return bin;
}

int main() {
#ifndef ONLINE_JUDGE
  FILE *infile = nullptr, *outfile = nullptr;
  errno_t err1 = freopen_s(&infile, "input.txt", "r", stdin);
  errno_t err2 = freopen_s(&outfile, "output.txt", "w", stdout);
#endif

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    long long n;
    cin >> n;
    vector<char> bin = convert_number(n);
    for (char x : bin) {
      cout << x;
    }
    cout << endl;
  }
  return 0;
}
