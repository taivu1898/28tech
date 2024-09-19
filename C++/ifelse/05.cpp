#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  int x1, y1, x2, y2;
  cin >> x1 >> y1 >> x2 >> y2;

  double ans = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
  cout << fixed << setprecision(2) << ans << endl;

  return 0;
}
