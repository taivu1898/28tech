#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  int n;
  cin >> n;

  ll tong = 0;
  while (n--) {
    int t;
    cin >> t;

    if (t % 2 == 0) {
      tong += t;
    }
  }

  cout << tong << endl;

  return 0;
}
