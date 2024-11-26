#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;
const int MAX = 1000001;

int arr[MAX];

int snt(int n) {
  for (int i = 2; i <= sqrt(n); ++i) {
    if (n % i == 0) {
      return false;
    }
  }

  return n > 1;
}

int main() {
  cin.tie(nullptr)->sync_with_stdio(false);

  int n;
  cin >> n;

  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
  }

  double s = 0, cnt = 0;
  for (int i = 0; i < n; ++i) {
    if (snt(arr[i])) {
      s += arr[i];
      ++cnt;
    }
  }

  cout << fixed << setprecision(3) << s / cnt << endl;

  return 0;
}
