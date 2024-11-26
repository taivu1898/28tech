#include <iomanip>
#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  int a, b;
  cin >> a >> b;

  ll tong = 1ll * a + b;
  int hieu = a - b;
  ll tich = 1ll * a * b;

  cout << tong << endl;
  cout << hieu << endl;
  cout << tich << endl;
  b == 0 ? cout << "INVALID"
         : cout << fixed << setprecision(4) << (float)a / b << endl;
  return 0;
}
