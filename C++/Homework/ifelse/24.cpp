#include <algorithm>
#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  int d1, d2, d3;
  cin >> d1 >> d2 >> d3;

  long long t1 = d1 + d2 + d3;
  long long t2 = 2 * d2 + 2 * d1;
  long long t3 = 2 * d2 + 2 * d3;
  long long t4 = 2 * d1 + 2 * d3;

  cout << min({t1, t2, t3, t4});

  return 0;
}
