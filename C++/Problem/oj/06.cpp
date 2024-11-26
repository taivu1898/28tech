#include <cmath>
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  double x;
  cin >> x;

  cout << (int)floor(x) << endl;
  cout << (int)ceil(x) << endl;
  cout << (int)round(x) << endl;
  return 0;
}
