#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  long long n;
  cin >> n;

  cout << n % 10 << endl;
  cout << n % 100 << endl;

  return 0;
}
