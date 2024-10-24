#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  char c;
  cin >> c;

  if (c >= 'a' && c <= 'z') {
    cout << "LOWER\n";
  } else if (c >= 'A' && c <= 'Z') {
    cout << "UPPER\n";
  } else if (c >= '0' && c <= '9') {
    cout << "DIGIT\n";
  } else {
    cout << "SPECIAL\n";
  }

  return 0;
}
