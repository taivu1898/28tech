#include <cmath>
#include <iostream>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;
const int MAX = 1000001;

int arr[MAX];

int main() {
  cin.tie(nullptr)->sync_with_stdio(false);

  ll n;
  cin >> n;

  ll c = 0;
  for (int i = 1; i <= sqrt(n); ++i) {
    if (n % i == 0) {
      ++c;
      if (n / i != i) {
        ++c;
      }
    }
  }

  cout << c << endl;

  return 0;
}
