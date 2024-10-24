#include <iostream>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  ll n;
  cin >> n;

  int cuoi_cung = n % 10;
  while (n >= 10) {
    n /= 10;
  }
  int dau = n;

  cout << dau << ' ' << cuoi_cung << endl;

  return 0;
}
