#include <cmath>
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

  ll x, y, z, n;
  cin >> x >> y >> z >> n;

  ll lcmxyz = (ll)lcm(x, lcm(y, z));
  ll p = (ll)pow(10, n - 1);
  ll ans = (p + lcmxyz - 1) / lcmxyz * lcmxyz;

  ans < (ll)pow(10, n) ? cout << ans << endl : cout << -1 << endl;

  return 0;
}
