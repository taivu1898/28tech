#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  int x, y, z, t;
  cin >> x >> y >> z >> t;

  cout << max(x, y) << endl;
  cout << min(z, t) << endl;
  cout << max({x, y, z}) << endl;
  cout << min({x, y, z, t}) << endl;

  return 0;
}
