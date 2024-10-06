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

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    snt(n) ? cout << "YES\n" : cout << "NO\n";
  }

  return 0;
}
