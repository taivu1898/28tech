#include <algorithm>
#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  ll a, b, c, d;
  cin >> a >> b >> c >> d;

  cout << max({a, b, c, d}) << ' ';
  cout << min({a, b, c, d});

  return 0;
}
