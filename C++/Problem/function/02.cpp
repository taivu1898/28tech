#include <iostream>

using namespace std;
using ll = long long;

void displayNumber(ll x, ll y, ll z) {
  cout << y << ' ' << x << ' ' << z << endl;
  cout << 1ll * x + y + z << endl;
  cout << "KET THUC !";
}

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  ll a, b, c;
  cin >> a >> b >> c;

  displayNumber(a, b, c);

  return 0;
}
