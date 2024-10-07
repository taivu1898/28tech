#include <cmath>
#include <iostream>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;
const int MAX = 1000001;

int arr[MAX];

int scp(ll n) {
  int s = sqrt(n);
  return s * s == n;
}

int main() {
  cin.tie(nullptr)->sync_with_stdio(false);

  ll n;
  cin >> n;

  scp(n) ? cout << "YES\n" : cout << "NO\n";

  return 0;
}
