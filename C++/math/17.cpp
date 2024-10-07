#include <cmath>
#include <iostream>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;
const int MAX = 1000001;

int arr[MAX];

int pttsnt(int n) {
  int ans;
  for (int i = 2; i <= sqrt(n); ++i) {
    while (n % i == 0) {
      ans = i;
      n /= i;
    }
  }

  if (n > 1) {
    ans = n;
  }

  return ans;
}

int main() {
  cin.tie(nullptr)->sync_with_stdio(false);

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    cout << pttsnt(n) << endl;
  }

  return 0;
}
