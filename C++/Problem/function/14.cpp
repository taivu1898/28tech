#include <iostream>

using namespace std;
using ll = long long;

ll rev(ll n) {
  ll ans = 0;

  while (n) {
    ans = ans * 10 + n % 10;
    n /= 10;
  }

  return ans;
}

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  ll n;
  cin >> n;

  cout << rev(n) << endl;

  return 0;
}
