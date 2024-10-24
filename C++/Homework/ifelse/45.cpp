#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  ll n;
  cin >> n;

  n % 9 == 0 ? cout << 9 << endl : cout << n % 9 << endl;

  return 0;
}
