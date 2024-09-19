#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  int x, y, z;
  cin >> x >> y >> z;

  long long ans = 1ll * x * y * z;

  cout << ans << endl;

  return 0;
}
