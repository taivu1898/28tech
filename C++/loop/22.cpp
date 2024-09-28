#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  int n;
  cin >> n;

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j <= i; ++j) {
      cout << "*";
    }
    cout << endl;
  }
  cout << endl;

  for (int i = 0; i < n; ++i) {
    for (int j = n; j > i; --j) {
      cout << "*";
    }
    cout << endl;
  }
  cout << endl;

  for (int i = 0; i < n; ++i) {
    for (int j = n; j > i; --j) {
      if (j < i) {
        cout << " ";
      } else {
        cout << '*';
      }
    }
    cout << endl;
  }
  cout << endl;

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      if (j < i) {
        cout << " ";
      } else {
        cout << '*';
      }
    }
    cout << endl;
  }
  cout << endl;

  return 0;
}
