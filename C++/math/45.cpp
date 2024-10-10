#include <iostream>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;
const int MAX = 1000001;

int arr[MAX];

int check(int n) {
  for (int i = 0; i <= n / 111; ++i) {
    int tmp = n - 111 * i;
    if (tmp % 11 == 0) {
      return 1;
    }
  }
  return 0;
}

int check2(int n) {
  int b = n % 11;
  int a = n - 111 * b;

  if (a >= 0 && a % 11 == 0) {
    return true;
  }
  return false;
}

int main() {
  cin.tie(nullptr)->sync_with_stdio(false);

  int n;
  cin >> n;

  check(n) ? cout << "YES\n" : cout << "NO\n";

  return 0;
}
