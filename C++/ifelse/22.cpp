#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  ll n, s;
  cin >> n >> s;

  cout << s / n + (s % n != 0);

  return 0;
}
