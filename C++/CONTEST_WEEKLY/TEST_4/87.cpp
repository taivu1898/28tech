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

int pld(int n) {
  int s = 0;
  int tmp = n;
  while (n) {
    s = s * 10 + n % 10;
    n /= 10;
  }

  return s == tmp;
}

int tcs(int n) {
  int s = 0;
  while (n) {
    s += n % 10;
    n /= 10;
  }
  return pld(s);
}

int main() {
  cin.tie(nullptr)->sync_with_stdio(false);

  int a, b;
  cin >> a >> b;

  for (int i = a; i <= b; ++i) {
    if (tcs(i) && snt(i)) {
      cout << i << ' ';
    }
  }

  return 0;
}
