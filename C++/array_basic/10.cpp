#include <cmath>
#include <iostream>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;
const int MAX = 1000001;

int arr[MAX];

int snt(int n) {
  for (int i = 2; i <= sqrt(n); ++i) {
    if (n % i == 0) {
      return false;
    }
  }

  return n > 1;
}

int main() {
  cin.tie(nullptr)->sync_with_stdio(false);

  int n;
  cin >> n;

  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
  }

  for (int i = 0; i < n; ++i) {
    int tongTrai = 0, tongPhai = 0;
    for (int j = 0; j < i; ++j) {
      tongTrai += arr[j];
    }
    for (int j = i + 1; j < n; ++j) {
      tongPhai += arr[j];
    }

    if (snt(tongTrai) && snt(tongPhai)) {
      cout << i << endl;
    }
  }

  return 0;
}
