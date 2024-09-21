#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  int n;
  cin >> n;

  n % 2 == 0 ? cout << "YES" : cout << "NO";
  cout << endl;

  n % 3 == 0 && n % 5 == 0 ? cout << "YES" : cout << "NO";
  cout << endl;

  n % 3 == 0 && n % 7 != 0 ? cout << "YES" : cout << "NO";
  cout << endl;

  n % 3 == 0 || n % 7 == 0 ? cout << "YES" : cout << "NO";
  cout << endl;

  n > 30 && n < 50 ? cout << "YES" : cout << "NO";
  cout << endl;

  n >= 30 && (n % 2 == 0 || n % 3 == 0 || n % 5 == 0) ? cout << "YES"
                                                      : cout << "NO";
  cout << endl;

  int digit = n % 10;

  (n >= 10 && n <= 99) && (digit == 2 || digit == 3 || digit == 5 || digit == 7)
      ? cout << "YES"
      : cout << "NO";
  cout << endl;

  n <= 100 && n % 23 == 0 ? cout << "YES" : cout << "NO";
  cout << endl;

  n < 10 || n > 20 ? cout << "YES" : cout << "NO";
  cout << endl;

  digit % 3 == 0 ? cout << "YES" : cout << "NO";
  cout << endl;
  return 0;
}
