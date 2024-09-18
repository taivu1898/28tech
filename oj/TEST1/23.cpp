#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  long long n;
  cin >> n;

  cout << n / 500000 << endl;
  cout << n % 500000 << endl;

  return 0;
}
