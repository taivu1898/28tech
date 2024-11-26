#include <iomanip>
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  double C;
  cin >> C;

  double F = (C * 9 / 5) + 32;
  cout << fixed << setprecision(2) << F << endl;

  return 0;
}
