#include <cmath>
#include <iostream>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;
const int MAX = 1000001;

int arr[MAX];

int isShpenic(ll n) {
  int e = 0;
  for (int i = 2; i <= sqrt(n); ++i) {
    int e2 = 0;
    if (n % i == 0) {
      while (n % i == 0) {
        ++e2;
        n /= i;
      }
      if (e2 > 1) {
        return 0;
      } else {
        ++e;
      }
    }
  }
  if (n > 1) {
    ++e;
  }

  return e == 3;
}

int main() {
  cin.tie(nullptr)->sync_with_stdio(false);

  ll n;
  cin >> n;

  cout << isShpenic(n) << endl;

  return 0;
}
