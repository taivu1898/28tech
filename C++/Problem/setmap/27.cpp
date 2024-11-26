#include <iostream>
#include <map>
#include <string>

using namespace std;
using ll = long long;

const int MOD = 100000007;

int main(int argc, char *argv[]) {
#ifndef ONLINE_JUDGE
  freopen("input", "r", stdin);
  freopen("output", "w", stdout);
#endif

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  map<string, string> mp;
  while (n--) {
    string name, address_token;
    cin.ignore();
    getline(cin, name);
    cin >> address_token;
    mp[address_token] = name;
  }

  int q;
  cin >> q;
  while (q--) {
    string address_1, address_2, coin;
    cin >> address_1 >> address_2 >> coin;
    string name_1 = "Unknown wallet", name_2 = "Unknown wallet";
    if (mp.count(address_1)) {
      name_1 = mp[address_1];
    }
    if (mp.count(address_2)) {
      name_2 = mp[address_2];
    }

    cout << name_1 << " send " << coin << " bitcoin to " << name_2 << endl;
  }

  return 0;
}