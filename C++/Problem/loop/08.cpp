#include <cmath>
#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  ll n;
  cin >> n;

  for (ll i = 1; i <= sqrt(n); ++i) {
    cout << i * i << ' ';
  }

  return 0;
}
