#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  int n;
  cin >> n;

  int t = 1;
  while (t <= n) {
    for (int i = 1; i <= 10; ++i) {
      cout << t << " x " << i << " = " << t * i << endl;
    }
    cout << endl;
    t++;
  }
  return 0;
}
