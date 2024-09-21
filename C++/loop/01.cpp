#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  int n;
  cin >> n;

  long long sum = 0;
  for (int i = 1; i <= n; ++i) {
    sum += i;
  }

  cout << sum << endl;

  return 0;
}
