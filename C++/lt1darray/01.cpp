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
    cout << arr[i] << ' ';
  }
  cout << endl;

  for (int i = n - 1; i >= 0; --i) {
    cout << arr[i] << ' ';
  }

  return 0;
}
