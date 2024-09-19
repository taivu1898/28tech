#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  int X, Y, Z, T;
  cin >> X >> Y >> Z >> T;

  cout << Y << ',' << Z << ',' << X << ',' << T << endl;
  cout << 1ll * X + Y + Z + T << endl;
  cout << X - Y + 1ll * Z * T << endl;

  return 0;
}
