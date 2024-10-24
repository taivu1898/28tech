#include <cmath>
#include <iostream>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;
const int MAX = 1000001;

int arr[MAX];

int pttsnt(int n, int k) {
  int c = 0;
  for (int i = 2; i <= sqrt(n); ++i) {
    if (n % i == 0) {
      while (n % i == 0) {
        ++c;
        n /= i;
        if (c == k) {
          return i;
        }
      }
    }
  }
  if (n > 1) {
    ++c;
    if (c == k) {
      return n;
    }
  }

  return -1;
}

int main() {
  cin.tie(nullptr)->sync_with_stdio(false);

  int n, k;
  cin >> n >> k;

  cout << pttsnt(n, k) << endl;

  return 0;
}
