#include <iostream>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;
const int MAX = 1000001;

int arr[MAX], mark[MAX];
ll fibon[93];

void generateFibonacci() {
  fibon[0] = 0, fibon[1] = 1;
  for (int i = 2; i <= 92; ++i) {
    fibon[i] = fibon[i - 1] + fibon[i - 2];
  }
}

int isFibonacci(ll n) {
  for (int i = 0; i <= 92; ++i) {
    if (fibon[i] == n) {
      return 1;
    }
  }
  return 0;
}

int main() {
  cin.tie(nullptr)->sync_with_stdio(false);

  int n;
  cin >> n;

  cout << (isFibonacci(n) ? "YES\n" : "NO\n");
  return 0;
}
