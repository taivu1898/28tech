#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  int n;
  cin >> n;

  ll ans = 1ll * n * (n - 1) / 2;
  cout << ans;

  return 0;
}
