#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  ll n, u1, d;
  cin >> n >> u1 >> d;

  ll sn = n * u1 + (n * (n - 1) * d) / 2;

  cout << sn << endl;

  return 0;
}
