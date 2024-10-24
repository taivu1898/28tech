#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  double f;
  cin >> f;

  cout << (int)f << endl;
  cout << f - (int)f << endl;

  return 0;
}
