#include <iostream>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;
const int MAX = 1000001;

int arr[MAX];
ll fibon[MAX];

void generate() {
  fibon[1] = 0;
  fibon[2] = 1;

  for (int i = 3; i <= MAX; ++i) {
    fibon[i] = (fibon[i - 1] % MOD + fibon[i - 2] % MOD) % MOD;
  }
}

int main() {
  cin.tie(nullptr)->sync_with_stdio(false);

  generate();

  int n;
  cin >> n;

  cout << fibon[n] << endl;

  return 0;
}
