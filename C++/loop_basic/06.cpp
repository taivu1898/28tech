#include <cstdlib>
#include <iostream>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  ll n;
  cin >> n;

  int cuoi = n % 10;
  n /= 10;
  int do_chenh_lech = 0;
  while (n) {
    int digit = n % 10;
    do_chenh_lech += abs(digit - cuoi);
    cuoi = digit;
    n /= 10;
  }

  cout << do_chenh_lech << endl;

  return 0;
}
