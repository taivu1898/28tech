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

  ll cnt2 = 0, cnt3 = 0, cnt5 = 0, cnt7 = 0, f = 0;

  while (n) {
    int d = n % 10;
    f = f * 10 + d;
    if (d == 2) {
      ++cnt2;
    }
    if (d == 3) {
      ++cnt3;
    }
    if (d == 5) {
      ++cnt5;
    }
    if (d == 7) {
      ++cnt7;
    }
    n /= 10;
  }

  if (cnt2 > 0) {
    cout << 2 << ' ' << cnt2 << endl;
  }
  if (cnt3 > 0) {
    cout << 3 << ' ' << cnt3 << endl;
  }
  if (cnt5 > 0) {
    cout << 5 << ' ' << cnt5 << endl;
  }
  if (cnt7 > 0) {
    cout << 7 << ' ' << cnt7 << endl;
  }

  cout << endl;

  while (f != 0) {
    int digit = f % 10;
    if (digit == 2 && cnt2 != 0) {
      cout << 2 << " " << cnt2 << endl;
      cnt2 = 0;
    }
    if (digit == 3 && cnt3 != 0) {
      cout << 3 << " " << cnt3 << endl;
      cnt3 = 0;
    }
    if (digit == 5 && cnt5 != 0) {
      cout << 5 << " " << cnt5 << endl;
      cnt5 = 0;
    }
    if (digit == 7 && cnt7 != 0) {
      cout << 7 << " " << cnt7 << endl;
      cnt7 = 0;
    }
    f /= 10;
  }

  return 0;
}
