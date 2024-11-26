#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  int n;
  cin >> n;

  for (int i = 0; i < n; ++i) {
    cout << "Hello 28tech\n";
  }

  for (int i = 0; i < n; ++i) {
    cout << i + 1 << ' ';
  }
  cout << endl;

  for (int i = 0; i < n; ++i) {
    cout << i << ' ';
  }
  cout << endl;

  for (int i = n; i > 0; --i) {
    cout << i << ' ';
  }
  cout << endl;

  for (int i = n - 1; i >= 0; --i) {
    cout << i << ' ';
  }
  cout << endl;

  return 0;
}
