#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  int n;
  cin >> n;

  bool ok = false;
  while (n--) {
    int t;
    cin >> t;

    if (t == 2022) {
      ok = true;
    }
  }

  ok ? cout << "YES\n" : cout << "NO\n";

  return 0;
}
