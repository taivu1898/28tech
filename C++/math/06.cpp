#include <cmath>
#include <iostream>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;
const int MAX = 1000001;

int arr[MAX];

bool csnt(int n) {
  while (n) {
    int digit = n % 10;
    if (digit != 2 && digit != 3 && digit != 5 && digit != 7) {
      return false;
    }
    n /= 10;
  }

  return true;
}

int snt(int n) {
  for (int i = 2; i <= sqrt(n); ++i) {
    if (n % 2 == 0) {
      return false;
    }
  }

  return n > 1;
}

int main() {
  cin.tie(nullptr)->sync_with_stdio(false);

  int a, b;
  cin >> a >> b;

  int cnt = 0;
  for (int i = a; i <= b; ++i) {
    if (csnt(i) && snt(i)) {
      ++cnt;
    }
  }

  cout << cnt << endl;

  return 0;
}
