#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  int n;
  cin >> n;

  int ans = 0;

  ans = n / 100;
  n %= 100;

  ans += n / 20;
  n %= 20;

  ans += n / 10;
  n %= 10;

  ans += n / 5;
  n %= 5;

  ans += n / 1;

  cout << ans << endl;
  return 0;
}
