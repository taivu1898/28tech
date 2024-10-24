#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  int n;
  cin >> n;

  int bia = n / 28;
  int vo = bia;

  while (vo >= 3) {
    bia += (vo / 3);
    vo = vo / 3 + vo % 3;
  }

  cout << bia << endl;

  return 0;
}
