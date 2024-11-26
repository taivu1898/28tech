#include <iomanip>
#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  int n;
  cin >> n;

  double e = 1, giai_thua = 1;
  for (int i = 1; i <= n; ++i) {
    giai_thua *= i;
    e += (1.0 / giai_thua);
  }

  cout << fixed << setprecision(2) << e << endl;

  return 0;
}
