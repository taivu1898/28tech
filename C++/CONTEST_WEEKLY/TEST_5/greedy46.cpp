#include <iostream>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;
const int MAX = 1000001;
const int FIB_LIMIT = 93;

int arr[MAX], mark[MAX];
ll prefix[MAX], fibon[FIB_LIMIT];

int countFactor(int n, int f) {
  int count = 0;
  while (n % f == 0) {
    ++count;
    n /= f;
  }
  return count;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
  }

  int c2 = 0, c5 = 0;
  for (int i = 0; i < n; ++i) {
    c2 += countFactor(arr[i], 2);
    c5 += countFactor(arr[i], 5);
  }

  c2 < c5 ? cout << c2 << endl : cout << c5 << endl;

  return 0;
}
