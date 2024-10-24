#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  int t, n;
  cin >> t >> n;

  if (t >= 1 && t <= 12 && n > 0) {
    if (t == 4 || t == 6 || t == 9 || t == 11) {
      cout << "30" << endl;
    } else if (t == 2) {
      n % 400 == 0 || (n % 4 == 0 && n % 100 != 0) ? cout << "29"
                                                   : cout << "28";
      cout << endl;
    } else {
      cout << "31" << endl;
    }
  } else {
    cout << "INVALID\n";
  }

  return 0;
}
