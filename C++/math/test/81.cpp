#include <cmath>
#include <iostream>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;
const int MAX = 1000001;

int arr[MAX];

int snt(int n) {
  for (int i = 2; i <= sqrt(n); ++i) {
    if (n % i == 0) {
      return false;
    }
  }

  return n > 1;
}

int sodep(int n) {
  while (n) {
    int digit = n % 10;
    int c2 = n % 100 / 10;
    if (digit < c2) {
      return false;
    }

    n /= 10;
  }

  return true;
}

int main() {
  cin.tie(nullptr)->sync_with_stdio(false);

  int a, b;
  cin >> a >> b;
  for (int i = a; i <= b; ++i) {
    if (sodep(i) && snt(i)) {
      cout << i << ' ';
    }
  }
  cout << endl;

  return 0;
}
