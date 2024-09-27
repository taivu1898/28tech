#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  ll n;
  cin >> n;

  int so_luong_chu_so = 0;

  if (n == 0) {
    cout << 1 << endl;
  } else {
    while (n) {
      ++so_luong_chu_so;
      n /= 10;
    }
    cout << so_luong_chu_so << endl;
  }

  return 0;
}
