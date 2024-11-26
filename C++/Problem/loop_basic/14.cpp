#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  int a, b;
  cin >> a >> b;

  bool flag = false;
  for (int i = min(a, b); i <= max(a, b); i++) {
    if (i % 2 == 0 || i % 3 == 0 || i % 5 == 0) {
      flag = true;
      cout << i << ' ';
    }
  }

  if (!flag) {
    cout << "28tech\n";
  }

  return 0;
}
