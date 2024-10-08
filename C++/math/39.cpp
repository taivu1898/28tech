#include <iostream>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;
const int MAX = 1000001;

int arr[MAX];

ll func(ll n) {
  if (n % 2 == 0) {
    return n / 2;
  } else {
    return -(n + 1) / 2;
  }
}

int main() {
  cin.tie(nullptr)->sync_with_stdio(false);

  ll n;
  cin >> n;

  cout << func(n) << endl;

  return 0;
}
