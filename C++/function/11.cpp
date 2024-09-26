#include <iostream>

using namespace std;
using ll = long long;

void my_swap(int &a, int &b) {
  int tmp = a;
  a = b;
  b = tmp;
}

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  int x, y;
  cin >> x >> y;

  my_swap(x, y);
  cout << x << ' ' << y << endl;

  return 0;
}
