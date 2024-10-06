#include <cmath>
#include <iostream>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;
const int MAX = 1000001;

int arr[MAX];

int b87(ll n) {
  ll lt = (ll)round(pow(n, 1.0 / 3));
  return lt * lt * lt == n;
}

int main() {
  cin.tie(nullptr)->sync_with_stdio(false);

  int t;
  cin >> t;

  while (t--) {
    ll n;
    cin >> n;

    b87(n) ? cout << "28tech\n" : cout << "29tech\n";
  }

  return 0;
}
