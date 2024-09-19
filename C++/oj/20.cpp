#include <iomanip>
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  int n;
  cin >> n;

  cout << setw(6) << setfill('0') << n << endl;
  cout << setw(6) << setfill('#') << n << endl;

  return 0;
}
