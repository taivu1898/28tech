#include <iostream>
#include <map>

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
  cin.ignore();
  map<string, string> mp;
  for (int i = 0; i < n; ++i) {
    string id, name;
    getline(cin, id);
    getline(cin, name);
    mp.insert({id, name});
  }

  int q;
  cin >> q;
  cin.ignore();
  while (q--) {
    string id;
    cin >> id;
    bool check = false;
    for (auto i : mp) {
      if (i.first == id) {
        cout << i.second << endl;
        check = true;
      }
    }
    if (!check) {
      cout << "NOT FOUND\n";
    }
  }

  return 0;
}