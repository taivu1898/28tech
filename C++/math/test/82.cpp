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

int pttsnt(int n) {
  int s = 0;
  for (int i = 2; i <= sqrt(n); ++i) {
    if (n % i == 0) {
      if (snt(i)) {
        s += i;
      }
      if (n / i != i && snt(n / i)) {
        s += n / i;
      }
    }
  }

  if (snt(n)) {
    s += n;
  }
  return s;
}

int main() {
  cin.tie(nullptr)->sync_with_stdio(false);

  int a, b;
  cin >> a >> b;
  int ok = 0;
  for (int i = a; i <= b; ++i) {
    int s = pttsnt(i);
    if (!snt(s)) {

      cout << i << ' ';
      ok = 1;
    }
  }

  if (!ok) {
    cout << "28tech\n";
  }

  return 0;
}
