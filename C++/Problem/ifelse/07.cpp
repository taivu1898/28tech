#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  int a, b;
  cin >> a >> b;

  // TODO: Số lớn nhất <= a mà chia hết cho b
  int so_lon_nhat = a / b * b;

  // TODO: Số nhỏ nhất >= a mà chia hết cho b
  int so_nho_nhat = (a / b + 1) * b;

  cout << so_lon_nhat << ' ' << so_nho_nhat << endl;

  return 0;
}
