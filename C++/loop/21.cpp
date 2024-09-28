#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  int n;
  cin >> n;

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      cout << '*';
    }
    cout << endl;
  }

  cout << endl;
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      if (i == 0 || j == 0 || i == n - 1 || j == n - 1) {
        cout << '*';
      } else {
        cout << ' ';
      }
    }
    cout << endl;
  }

  cout << endl;
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      if (i == 0 || j == 0 || i == n - 1 || j == n - 1) {
        cout << '*';
      } else {
        cout << '#';
      }
    }
    cout << endl;
  }

  cout << endl;
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      if (i == 0 || j == 0 || i == n - 1 || j == n - 1) {
        cout << i + 1 << ' ';
      } else {
        cout << "  ";
      }
    }
    cout << endl;
  }
  return 0;
}
