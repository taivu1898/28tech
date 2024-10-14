#include <cmath>
#include <iostream>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;
const int MAX = 1000001;

int arr[MAX];

int dem(int n) {
  int cnt = 0;
  while (n) {
    ++cnt;
    n /= 10;
  }
  return cnt;
}

int isAmrstrong(int n) {
  int tmp = n, cnt = dem(n);
  int s = 0;
  while (n) {
    int digit = n % 10;
    s += (int)pow(digit, cnt);
    n /= 10;
  }

  return s == tmp;
}

int main() {
  cin.tie(nullptr)->sync_with_stdio(false);

  int a, b;
  cin >> a >> b;
  for (int i = a; i <= b; ++i) {
    if (isAmrstrong(i)) {
      cout << i << ' ';
    }
  }

  return 0;
}
