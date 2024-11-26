#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  double a;
  cin >> a;

  double phan_thap_phan = a - (int)a;

  if (phan_thap_phan >= 0.5) {
    cout << (int)a + 1;
  } else {
    cout << (int)a;
  }

  return 0;
}
