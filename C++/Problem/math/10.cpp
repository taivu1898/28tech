#include <iostream>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;
const int MAX = 1000001;

int arr[MAX];

int main() {
  cin.tie(nullptr)->sync_with_stdio(false);

  int t;
  cin >> t;

  int ans = 1;
  while (t--) {
    int p, e;
    cin >> p >> e;

    ans *= (e + 1);
  }

  cout << ans << endl;
  return 0;
}
