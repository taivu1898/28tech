#include <algorithm>
#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  ll a, b;
  cin >> a >> b;

  ll n = min(a, b);
  int giaithua = 1;
  for (int i = 1; i <= n; ++i) {
    giaithua *= i;
  }
  cout << giaithua << endl;

  return 0;
}
