#include <iomanip>
#include <ios>
#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  ll a, b;
  cin >> a >> b;

  char c;
  cin >> c;

  switch (c) {
  case '+':
    cout << a << " + " << b << " = " << a + b << endl;
    break;
  case '-':
    cout << a << " - " << b << " = " << a - b << endl;
    break;
  case '*':
    cout << a << " * " << b << " = " << a * b << endl;
    break;
  case '/':
    cout << a << " / " << b << " = " << fixed << setprecision(2) << 1.0 * a / b
         << endl;
    break;
  case '%':
    cout << a << " % " << b << " = " << a % b << endl;
    break;
  }

  return 0;
}
