#include <algorithm>
#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  int a, b, c;
  cin >> a >> b >> c;

  int so_nho_nhat = min({a, b, c});
  int so_lon_nhat = max({a, b, c});

  cout << so_nho_nhat << ' ' << a + b + c - so_lon_nhat - so_nho_nhat << ' '
       << so_lon_nhat << endl;

  return 0;
}
