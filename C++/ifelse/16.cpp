#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  char c;
  cin >> c;

  if (c == 90 || c == 122) {
    cout << 'a' << endl;
  } else if (c >= 65 && c <= 90) {
    c += 33;
    cout << c << endl;
  } else if (c >= 97 && c <= 122) {
    c += 1;
    cout << c << endl;
  }
  return 0;
}
