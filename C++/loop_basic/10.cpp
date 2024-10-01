#include <iostream>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;

int sl(ll n) {
  int dem = 0;
  while (n) {
    ++dem;
    n /= 10;
  }
  return dem;
}

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  ll n;
  cin >> n;
  int dem = sl(n);
  if (n == 0) {
    cout << 0;
  } else if (dem % 2 == 0) {
    cout << "NOT FOUND\n";
  } else {
    int k = dem / 2 + 1;
    int vitri = 0;
    while (n) {
      ++vitri;
      if (vitri == k) {
        cout << n % 10;
        break;
      }
      n /= 10;
    }
  }

  return 0;
}
