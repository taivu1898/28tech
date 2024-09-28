#include <iostream>

using namespace std;
using ll = long long;

ll gcd(ll a, ll b) {
  while (b != 0) {
    int r = a % b;
    a = b;
    b = r;
  }

  return a;
}

ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  ll a, b;
  cin >> a >> b;

  cout << gcd(a, b) << endl;

  return 0;
}
