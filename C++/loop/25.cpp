#include <iomanip>
#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  int n;
  cin >> n;

  double ans = 1;
  ll giaithua = 1;
  for (int i = 1; i < n; ++i) {
    giaithua *= i;
    ans += 1.0 / giaithua;
  }

  cout << fixed << setprecision(4) << ans << endl;

  return 0;
}
