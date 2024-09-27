#include <cmath>
#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  ll n;
  cin >> n;

  ll sum = 0;
  for (int i = 1; i <= sqrt(n); ++i) {
    if (n % i == 0) {
      sum += i;
      if (n / i != i) {
        sum += n / i;
      }
    }
  }

  cout << sum << endl;

  return 0;
}
