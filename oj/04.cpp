#include <cmath>
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  int x, y;
  cin >> x >> y;

  long long ans = (long long)pow(x, y);

  cout << ans;

  return 0;
}
