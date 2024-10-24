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

  int soChan = 0;
  int tongChan = 0, tongLe = 0;
  for (int i = 0; i < n; ++i) {
    if (arr[i] % 2 == 0) {
      ++soChan;
      tongChan += arr[i];
    } else {
      tongLe += arr[i];
    }
  }

  cout << soChan << endl
       << n - soChan << endl
       << tongChan << endl
       << tongLe << endl;

  return 0;
}
