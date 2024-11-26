#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  ll n, m, a;
  cin >> n >> m >> a;

  // Tính chiều dài
  if (n % a == 0) {
    n /= a;
  } else {
    n = n / a + 1;
  }

  // Tính chiều rộng
  if (m % a == 0) {
    m /= a;
  } else {
    m = m / a + 1;
  }

  cout << n * m << endl;
  return 0;
}
