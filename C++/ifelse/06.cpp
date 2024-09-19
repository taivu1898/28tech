#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  int n;
  cin >> n;

  n % 2 == 0 ? cout << "YES" : cout << "NO";
  n % 3 == 0 && n % 5 == 0 ? cout << "YES" : cout << "NO";
  n % 3 == 0 && n % 7 != 0 ? cout << "YES" : cout << "NO";
  n % 3 == 0 || n % 7 != 0 ? cout << "YES" : cout << "NO";

  return 0;
}
