#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  int n;
  cin >> n;

  if (n >= 1000) {
    cout << n * 4500 + 1200000;
  } else if (n >= 800) {
    cout << n * 3900 + 900000;
  } else if (n >= 500) {
    cout << n * 3700 + 800000;
  } else {
    cout << n * 3300;
  }

  return 0;
}
