#include <cmath>
#include <iostream>

using namespace std;
using ll = long long;

bool nt(int n) {
  for (int i = 2; i <= sqrt(n); ++i) {
    if (n % i == 0) {
      return false;
    }
  }

  return n > 1;
}

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

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  int a, b;
  cin >> a >> b;

  int cnt = 0;
  for (int i = a; i <= b; ++i) {
    if (csnt(i) && nt(i)) {
      ++cnt;
    }
  }

  cout << cnt << endl;

  return 0;
}
