#include <iostream>
#include <map>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;
const int MAX = 1000001;
const int FIB_LIMIT = 93;

char arr[MAX], mark[MAX];
ll prefix[MAX], fibon[FIB_LIMIT];

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
  map<char, int> mp;

  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
    mp[arr[i]]++;
  }

  auto itr = mp.begin();
  cout << itr->first << ' ' << itr->second << endl;
  cout << endl;

  auto itr2 = mp.rbegin();
  cout << itr2->first << ' ' << itr2->second << endl;
  cout << endl;

  for (auto itr = mp.begin(); itr != mp.end(); ++itr) {
    cout << itr->first << ' ' << itr->second << endl;
  }
  cout << endl;

  for (auto itr = mp.rbegin(); itr != mp.rend(); ++itr) {
    cout << itr->first << ' ' << itr->second << endl;
  }
  return 0;
}
