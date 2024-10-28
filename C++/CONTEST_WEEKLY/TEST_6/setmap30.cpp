#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;
using ll = long long;

bool tach(ll n) {
  while (n) {
    int digit = n % 10;
    if (digit != 0 && digit != 2 && digit != 6 && digit != 8) {
      return false;
    }
    n /= 10;
  }
  return true;
}

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
  vector<ll> v(n);
  for (int i = 0; i < n; ++i) {
    cin >> v[i];
  }

  unordered_map<ll, ll> freq;
  vector<ll> order;

  for (ll i : v) {
    if (tach(i)) {
      if (freq[i] == 0) {
        order.push_back(i);
      }
      freq[i]++;
    }
  }

  for (ll num : order) {
    cout << num << " " << freq[num] << endl;
  }

  return 0;
}
