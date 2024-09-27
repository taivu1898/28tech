#include <iomanip>
#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  int n;
  cin >> n;

  double sum = 0;

  for (int i = 1; i <= n; ++i) {
    sum += (1.0 / i);
  }

  cout << fixed << setprecision(3) << sum << endl;

  return 0;
}
