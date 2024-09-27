#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  int n;
  cin >> n;

  if (n / 2 >= 1) {
    cout << n / 2 << endl;
    if (n % 2 == 0) {
      for (int i = 1; i <= n / 2; ++i) {
        cout << 2 << ' ';
      }
    } else {
      for (int i = 1; i <= (n - 2) / 2; ++i) {
        cout << 2 << ' ';
      }
      cout << 3 << endl;
    }

  } else {
    cout << -1 << endl;
  }

  return 0;
}
