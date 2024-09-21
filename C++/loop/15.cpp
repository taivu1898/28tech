#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  int n;
  cin >> n;

  long long giai_thua = 1;
  for (int i = 1; i <= n; ++i) {
    giai_thua *= i;
  }
  cout << giai_thua << endl;

  return 0;
}
