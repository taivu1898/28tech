#include <iomanip>
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  int n;
  cin >> n;

  cout << 1ll * n * 2 << endl;
  cout << endl;
  cout << 1ll * n * 10 << endl;
  cout << endl;
  cout << n / 2 << endl;
  cout << endl;
  cout << fixed << setprecision(3) << (double)n / 2 << endl;
  cout << endl;

  return 0;
}
