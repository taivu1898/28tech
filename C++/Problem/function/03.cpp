#include <iostream>

using namespace std;
using ll = long long;

int solve(int &x) { return x * 28; }

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  int n;
  cin >> n;

  cout << solve(n);

  return 0;
}
