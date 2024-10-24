#include <iostream>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;
const int MAX = 1000001;

int arr[MAX];

int main() {
  cin.tie(nullptr)->sync_with_stdio(false);

  ll n;
  cin >> n;

  if (n % 4 == 1) {
    cout << 8;
  }
  if (n % 4 == 2) {
    cout << 4;
  }
  if (n % 4 == 3) {
    cout << 2;
  }
  if (n % 4 == 0) {
    cout << 6;
  }

  return 0;
}
