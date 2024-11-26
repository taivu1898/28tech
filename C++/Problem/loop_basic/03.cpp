#include <iostream>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  int n;
  cin >> n;

  for (int i = 1; i <= n; ++i) {
    cout << i << ' ';
  }
  cout << endl;

  for (int i = n; i >= 0; --i) {
    cout << i << ' ';
  }
  cout << endl;

  for (int i = 0; i <= n; i += 2) {
    cout << i << ' ';
  }
  cout << endl;

  for (int i = 1; i <= n; i += 2) {
    cout << i << ' ';
  }
  cout << endl;

  for (int i = 0; i < n; i += 4) {
    cout << i << ' ';
  }
  cout << endl;

  for (char c = 'a'; c < 'a' + n; ++c) {
    cout << c << ' ';
  }
  cout << endl;

  for (char c = 'z' - n + 1; c <= 'z'; ++c) {
    cout << c << ' ';
  }
  cout << endl;

  return 0;
}
