#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  int h, m;
  cin >> h >> m;

  cout << 24 * 60 - h * 60 - m << endl;

  return 0;
}
