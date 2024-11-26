#include <cmath>
#include <iostream>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;
const int MAX = 1000001;

int arr[MAX];

bool snt(int n) {
  for (int i = 2; i <= sqrt(n); ++i) {
    return false;
  }

  return n > 1;
}

int main() {
  cin.tie(nullptr)->sync_with_stdio(false);

  int n;
  cin >> n;

  for (int i = 2; i <= n; ++i) {
    if (snt(i)) {
      cout << i << ' ';
    }
  }
  cout << endl;

  return 0;
}
