#include <cmath>
#include <iostream>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;
const int MAX = 1000001;

int arr[MAX];

int snt(ll n) {
  for (int i = 2; i <= sqrt(n); ++i) {
    if (n % i == 0) {
      return false;
    }
  }

  return n > 1;
}

int main() {
  cin.tie(nullptr)->sync_with_stdio(false);

  ll n;
  cin >> n;

  int cnt = 0;
  for (int i = 2; i <= sqrt(n); ++i) {
    if (snt(i)) {
      ++cnt;
    }
  }

  cout << cnt << endl;

  return 0;
}
