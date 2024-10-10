#include <iostream>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;
const int MAX = 1000001;

int arr[MAX];

ll gcd(ll a, ll b) {
  if (b == 0) {
    return a;
  }
  return gcd(b, a % b);
}

ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

int main() {
  cin.tie(nullptr)->sync_with_stdio(false);

  int a, b, c, d;
  cin >> a >> b >> c >> d;

  cout << gcd(gcd(a, b), gcd(c, d)) << ' ';
  cout << lcm(lcm(a, b), lcm(c, d));

  return 0;
}
