#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  int n;
  cin >> n;

  ll sum = 0;
  for (int i = 0; i <= n; ++i) {
    sum += i * i * i;
  }

  cout << sum << endl;

  return 0;
}
