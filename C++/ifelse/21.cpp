#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  long long a, b, k;
  cin >> a >> b >> k;

  if (k % 2 == 0) {
    a *= (k / 2);
  } else {
    a *= (k / 2 + 1);
  }
  b *= (k / 2);

  cout << a - b;
  return 0;
}
