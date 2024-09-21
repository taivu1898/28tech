#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  ll n;
  int a, b;
  cin >> n >> a >> b;

  ll chai1 = n * a;
  ll chai2 = n * b / 2;

  if (chai1 < chai2) {
    cout << chai1 << endl;
  } else {
    n % 2 == 0 ? cout << chai2 : cout << (n - 1) * b / 2 + a;
  }

  return 0;
}
