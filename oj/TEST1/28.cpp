#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  float n;
  cin >> n;

  cout << fixed << setprecision(2) << pow(n, 1.0 / 5) << endl;

  return 0;
}
