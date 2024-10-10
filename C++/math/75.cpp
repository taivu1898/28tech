#include <cmath>
#include <iostream>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;
const int MAX = 1000001;

int arr[MAX];

void pttsnt(int n) {
  for (int i = 2; i <= sqrt(n); ++i) {
    if (n % i == 0) {
      while (n % i == 0) {
        n /= i;
      }
      cout << i << ' ';
    }
  }

  if (n > 1) {
    cout << n;
  }
  cout << endl;
}

void pttsnt2(int n) {
  for (int i = 2; i <= sqrt(n); ++i) {
    int e = 0;
    if (n % i == 0) {
      while (n % i == 0) {
        ++e;
        n /= i;
      }
      cout << '(' << i << ", " << e << ") ";
    }
  }

  if (n > 1) {
    cout << '(' << n << ", 1)";
  }
  cout << endl;
}

void pttsnt3(int n) {
  for (int i = 2; i <= sqrt(n); ++i) {
    if (n % i == 0) {
      while (n % i == 0) {
        n /= i;
        cout << i;
        if (n != 1) {
          cout << " x ";
        }
      }
    }
  }

  if (n > 1) {
    cout << n;
  }
  cout << endl;
}

int main() {
  cin.tie(nullptr)->sync_with_stdio(false);

  int n;
  cin >> n;

  pttsnt(n);
  pttsnt2(n);
  pttsnt3(n);

  return 0;
}
