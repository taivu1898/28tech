#include <iostream>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;
const int MAX = 1000001;

int arr[MAX];

int main() {
  cin.tie(nullptr)->sync_with_stdio(false);

  int n;
  cin >> n;

  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
  }

  for (int i = 0; i < n; ++i) {
    int ok = 1;
    for (int j = 0; j < i; ++j) {
      if (arr[i] == arr[j]) {
        ok = 0;
        break;
      }
    }

    int count = 0;
    for (int j = 0; j < n; ++j) {
      if (arr[i] == arr[j]) {
        ++count;
      }
    }

    if (ok) {
      cout << arr[i] << ' ' << count << endl;
    }
  }

  return 0;
}
