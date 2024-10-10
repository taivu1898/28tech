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

  int x;
  cin >> x;

  int lonHonX = 0, nhoHonX = 0;
  for (int i = 0; i < n; ++i) {
    if (arr[i] < x) {
      ++nhoHonX;
    } else if (arr[i] > x) {
      ++lonHonX;
    }
  }

  cout << nhoHonX << endl << lonHonX << endl;
  return 0;
}
