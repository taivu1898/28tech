#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  int a, b, c, n;
  cin >> a >> b >> c >> n;

  ll tong_tien = 1ll * a + b + c + n;

  if (tong_tien % 3 == 0) {
    ll chia_deu = tong_tien / 3;
    if (chia_deu >= a && chia_deu >= b && chia_deu >= c) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  } else {
    cout << "NO\n";
  }

  return 0;
}
