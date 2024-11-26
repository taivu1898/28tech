#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  char c;
  cin >> c;

  if (c >= 'a' && c <= 'z') {
    cout << char(c - 32);
  } else if (c >= 'A' && c <= 'Z') {
    cout << char(c + 32);
  } else {
    cout << c << endl;
  }

  return 0;
}
