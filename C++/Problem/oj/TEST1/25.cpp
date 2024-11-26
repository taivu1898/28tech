#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  long long n;
  cin >> n;

  long long ans = n / 3 + n / 5 - n / 15;

  cout << ans << endl;

  return 0;
}
