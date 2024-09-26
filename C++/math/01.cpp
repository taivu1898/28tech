#include <cmath>
#include <iostream>

using namespace std;
using ll = long long;

bool so_nguyen_to(int n) {
  for (int i = 2; i <= sqrt(n); ++i) {
    if (n % i == 0) {
      return false;
    }
  }

  return n > 1;
}

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  int n;
  cin >> n;

  so_nguyen_to(n) ? cout << "YES\n" : cout << "NO\n";

  return 0;
}
