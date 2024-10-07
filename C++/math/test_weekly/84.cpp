#include <iostream>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;
const int MAX = 1000001;

int arr[MAX];

ll factorial(int n) {
  ll m = 1;
  for (int i = 1; i <= n; ++i) {
    m *= i;
  }
  return m;
}

ll isStrong(int n) {
  int tmp = n;
  ll s = 0;
  while (n) {
    int digit = n % 10;
    s += factorial(digit);
    n /= 10;
  }

  return s == tmp;
}

int main() {
  cin.tie(nullptr)->sync_with_stdio(false);

  int a, b;
  cin >> a >> b;
  if (a == 0) {
    ++a;
  }
  for (int i = a; i <= b; ++i) {
    if (isStrong(i)) {
      cout << i << ' ';
    }
  }
  cout << endl;

  return 0;
}
