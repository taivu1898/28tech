#include <iostream>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;
const int MAX = 1000001;

int a[MAX];

void nhap(int a[], int n) {
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }
}

void in(int a[], int n) {
  for (int i = 0; i < n; ++i) {
    cout << a[i] << ' ';
  }
}

void thaydoi(int a[], int n) {
  for (int i = 0; i < n; ++i) {
    a[i] *= 2;
  }
}

int main() {
  cin.tie(nullptr)->sync_with_stdio(false);

  int n;
  cin >> n;
  nhap(a, n);
  thaydoi(a, n);
  in(a, n);

  return 0;
}
