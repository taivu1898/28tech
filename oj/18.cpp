#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  int a, b;
  cin >> a >> b;

  int tmp = a;
  a = b;
  b = tmp;

  cout << 1ll * 128 * a + 1ll * 97 * b + 1000 << endl;

  return 0;
}
