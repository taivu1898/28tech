#include <algorithm>
#include <iostream>
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
  vector<char> v;
  for (int i = 0; i < n; ++i) {
    char tmp;
    cin >> tmp;
    v.push_back(tmp);
  }

  unordered_map<char, int> freq;
  for (char i : v) {
    freq[i]++;
  }

  int maxFreq = 0;
  for (auto &p : freq) {
    maxFreq = max(maxFreq, p.second);
  }

  cout << maxFreq << endl;
  vector<char> maxFreqChar;
  for (auto &p : freq) {
    if (p.second == maxFreq) {
      maxFreqChar.push_back(p.first);
    }
  }

  sort(maxFreqChar.begin(), maxFreqChar.end());
  for (auto c : maxFreqChar) {
    cout << c << ' ';
  }

  return 0;
}
