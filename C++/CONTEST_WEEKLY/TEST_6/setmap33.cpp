#include <iostream>
#include <unordered_map>

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
  unordered_map<int, int> votes;
  for (int i = 0; i < n; ++i) {
    int candidate;
    cin >> candidate;
    votes[candidate]++;
  }

  int maxVotes = 0, cnt = 0;
  for (auto &i : votes) {
    if (i.second > cnt) {
      cnt = i.second;
      maxVotes = 1;
    } else if (i.second == cnt) {
      maxVotes++;
    }
  }

  maxVotes == 1 ? cout << "Trump" : cout << "Biden";
  return 0;
}
