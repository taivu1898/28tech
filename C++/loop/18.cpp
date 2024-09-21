#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  ll n;
  cin >> n;

  int cnt = 0;
  while (n) {
    int digit = n % 10;
    if (digit == 2 || digit == 3 || digit == 5 || digit == 7) {
      ++cnt;
    }
    n /= 10;
  }
  cout << cnt << endl;

  return 0;
}
