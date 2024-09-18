#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  int n;
  cin >> n;

  cout << fixed << setprecision(2) << sqrt(n) << endl;
  cout << fixed << setprecision(3) << cbrt(n) << endl;
  return 0;
}
