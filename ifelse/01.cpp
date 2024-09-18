#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  int x;
  cin >> x;

  long long ans = 1ll * x * x * x + 1ll * 3 * x * x + x + 1;
  cout << ans << endl;

  return 0;
}
