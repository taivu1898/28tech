#include <iomanip>
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  float a, b;
  cin >> a >> b;

  cout << (int)b / a << endl;
  cout << fixed << setprecision(2) << b / a << endl;

  return 0;
}
