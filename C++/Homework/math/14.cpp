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

  ll so_luong_so_0 = 0;
  while (n) {
    n /= 5;
    so_luong_so_0 = so_luong_so_0 % MOD + n % MOD;
  }
  cout << so_luong_so_0 % MOD << endl;

  return 0;
}
