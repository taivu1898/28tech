#include <bits/stdc++.h>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;
const int MAX = 1000001;
const int FIB_LIMIT = 93;

int arr[MAX], mark[MAX];
ll prefix[MAX], fibon[FIB_LIMIT];

void generateFibonacci() {
  fibon[0] = 0;
  fibon[1] = 1;
  for (int i = 2; i < FIB_LIMIT; ++i) {
    fibon[i] = fibon[i - 1] + fibon[i - 2];
  }
}

int isFibnonacci(ll n) {
  for (int i = 0; i < FIB_LIMIT; ++i) {
    if (n == fibon[i]) {
      return 1;
    }
  }
  return 0;
}

int main(int argc, char *argv[]) {
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  generateFibonacci();

  while (t--) {
    ll n;
    cin >> n;

    isFibnonacci(n) ? cout << "YES\n" : cout << "NO\n";
  }

  return 0;
}