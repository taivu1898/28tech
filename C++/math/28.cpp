#include <iostream>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;
const int MAX = 1000001;

int arr[MAX];

int slp(ll n) {
  while (n) {
    int digit = n % 10;
    if (digit != 6 && digit != 8 && digit != 0) {
      return false;
    }
    n /= 10;
  }

  return true;
}

int main() {
  cin.tie(nullptr)->sync_with_stdio(false);

  ll n;
  cin >> n;

  cout << slp(n) << endl;

  return 0;
}
