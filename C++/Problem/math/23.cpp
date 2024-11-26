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

  ll s = 0;
  for (int i = 1; i <= sqrt(n); ++i) {
    if (n % i == 0) {
      s += i;
      if (n / i != i) {
        s += n / i;
      }
    }
  }

  cout << s << endl;

  return 0;
}
