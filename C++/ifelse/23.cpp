#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  int n, m;
  cin >> n >> m;

  if (m > n) {
    cout << "-1\n";
  } else {
    ll bMin = n / 2 + n % 2;

    bMin % m == 0 ? cout << bMin : cout << (bMin / m + 1) * m;
    cout << endl;
  }

  return 0;
}
