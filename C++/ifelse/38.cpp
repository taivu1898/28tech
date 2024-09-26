#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  int n;
  cin >> n;

  char c;
  bool check1 = false;
  int dem = 0;
  while (cin >> c) {
    if (c == 'C') {
      check1 = true;
    } else if (c == '+') {
      ++dem;
    }
  }

  check1 &&dem >= 2 ? cout << "YES\n" : cout << "NO\n";

  return 0;
}
