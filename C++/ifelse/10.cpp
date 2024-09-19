#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  int a, b, c;
  cin >> a >> b >> c;

  if (a > 0 && b > 0 && c > 0 && a + b > c && b + c > a && c + a > b) {
    cout << "YES";
  } else {
    cout << "NO";
  }

  return 0;
}
