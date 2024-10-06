#include <iostream>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;
const int MAX = 1000001;

int arr[MAX];

int gcd(int a, int b) {
  if (b == 0) {
    return a;
  }
  return gcd(b, a % b);
}

int main() {
  cin.tie(nullptr)->sync_with_stdio(false);

  int a, b;
  cin >> a >> b;
  for (int i = a; i <= b; i++) {
    for (int j = i + 1; j <= b; j++) {
      if (gcd(i, j) == 1) {
        cout << "(" << i << "," << j << ")\n";
      }
    }
  }
  return 0;
}
