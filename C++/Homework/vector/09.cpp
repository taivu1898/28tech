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
  int arr[10000];
  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
  }

  vector<pair<int, int>> freq;
  for (int i = 0; i < n; ++i) {
    int ok = false;
    for (auto &p : freq) {
      if (p.first == arr[i]) {
        p.second++;
        ok = true;
        break;
      }
    }
    if (!ok) {
      freq.push_back(make_pair(arr[i], 1));
    }
  }

  for (auto item : freq) {
    cout << item.first << ' ' << item.second << endl;
  }

  return 0;
}
