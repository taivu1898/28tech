
#include <iostream>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;
const int MAX = 1000001;
const int FIB_LIMIT = 93;

ll arr[MAX], mark[MAX];
ll prefix[MAX], fibon[FIB_LIMIT];

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
  }

  ll cnt0 = 0, cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0, cnt5 = 0, cnt6 = 0,
     cnt7 = 0, cnt8 = 0, cnt9 = 0;
  for (int i = 0; i < n; ++i) {
    ll num = arr[i];
    if (num == 0) {
      ++cnt0;
    }

    while (num) {
      int digit = num % 10;
      if (digit == 0) {
        ++cnt0;
      }
      if (digit == 1) {
        ++cnt1;
      }
      if (digit == 2) {
        ++cnt2;
      }
      if (digit == 3) {
        ++cnt3;
      }
      if (digit == 4) {
        ++cnt4;
      }
      if (digit == 5) {
        ++cnt5;
      }
      if (digit == 6) {
        ++cnt6;
      }
      if (digit == 7) {
        ++cnt7;
      }
      if (digit == 8) {
        ++cnt8;
      }
      if (digit == 9) {
        ++cnt9;
      }
      num /= 10;
    }
  }

  if (cnt0 > 0) {
    cout << 0 << ' ' << cnt0 << endl;
  }
  if (cnt1 > 0) {
    cout << 1 << ' ' << cnt1 << endl;
  }
  if (cnt2 > 0) {
    cout << 2 << ' ' << cnt2 << endl;
  }
  if (cnt3 > 0) {
    cout << 3 << ' ' << cnt3 << endl;
  }
  if (cnt4 > 0) {
    cout << 4 << ' ' << cnt4 << endl;
  }
  if (cnt5 > 0) {
    cout << 5 << ' ' << cnt5 << endl;
  }
  if (cnt6 > 0) {
    cout << 6 << ' ' << cnt6 << endl;
  }
  if (cnt7 > 0) {
    cout << 7 << ' ' << cnt7 << endl;
  }
  if (cnt8 > 0) {
    cout << 8 << ' ' << cnt8 << endl;
  }
  if (cnt9 > 0) {
    cout << 9 << ' ' << cnt9 << endl;
  }
  return 0;
}
