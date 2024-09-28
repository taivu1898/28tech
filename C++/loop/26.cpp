#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  int a, b, n;
  cin >> a >> b >> n;

  bool ok = false;
  for (int i = 0; i <= n / a; ++i) {
    int ans = n - a * i;
    if (ans % b == 0) {
      ok = true;
    }
  }

  ok ? cout << "YES\n" : cout << "NO\n";

  return 0;
}
