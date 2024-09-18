#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  long long a, b, c;

  cin >> a >> b >> c;

  long long ans = a * (b + c) + b * (a + c);

  cout << ans << endl;

  return 0;
}
