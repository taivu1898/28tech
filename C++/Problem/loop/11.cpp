#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  int n;
  cin >> n;

  int tong_chan = 0, tong_le = 0;

  for (int i = 1; i <= n; ++i) {
    if (i % 2 == 0) {
      tong_chan += i;
    } else {
      tong_le += i;
    }
  }

  cout << tong_chan - tong_le << endl;

  return 0;
}
