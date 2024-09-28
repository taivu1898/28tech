#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    n % 2 == 0 ? cout << "EVEN\n" : cout << "ODD\n";
  }

  return 0;
}
