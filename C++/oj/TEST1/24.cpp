#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  double x, y;
  cin >> x >> y;

  double ans = sqrt(pow(x, 2) + pow(y, 2));
  cout << fixed << setprecision(2) << ans << endl;

  return 0;
}
