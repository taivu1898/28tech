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

  int ok = 0;
  for (int i = 0; i < n; i += 2) {
    if (arr[i] % 2 == 0) {
      cout << arr[i] << ' ';
      ok = 1;
    }
  }

  if (!ok) {
    cout << "NONE\n";
  }
  return 0;
}
