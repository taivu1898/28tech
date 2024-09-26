#include <iostream>

using namespace std;
using ll = long long;

ll palindrome(ll n) {
  ll ans = 0;
  ll tmp = n;

  while (n) {
    ans = ans * 10 + n % 10;
    n /= 10;
  }

  return ans == tmp;
}

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  int a, b;
  cin >> a >> b;

  for (int i = a; i <= b; ++i) {
    if (palindrome(i)) {
      cout << i << ' ';
    }
  }

  return 0;
}
