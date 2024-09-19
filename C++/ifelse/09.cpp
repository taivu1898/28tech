#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  int n;
  cin >> n;

  n % 400 == 0 || (n % 4 == 0 && n % 100 != 0) ? cout << "YES\n"
                                               : cout << "NO\n";
  return 0;
}
