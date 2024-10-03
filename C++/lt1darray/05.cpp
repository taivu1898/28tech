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

  cout << arr[0] << ' ' << arr[n - 1] << endl;
  cout << arr[1] << ' ' << arr[n - 2] << endl;

  if (n % 2 == 0) {
    cout << "28tech\n";
  } else {
    cout << arr[n / 2] << endl;
  }

  return 0;
}
