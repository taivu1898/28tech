#include <cmath>
#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  int n;
  cin >> n;

  ll tich_uoc = 1;
  for (int i = 1; i <= sqrt(n); ++i) {
    if (n % i == 0) {
      tich_uoc *= i;
      if (n / i != i) {
        tich_uoc *= n / i;
      }
    }
  }

  cout << tich_uoc << endl;

  return 0;
}
