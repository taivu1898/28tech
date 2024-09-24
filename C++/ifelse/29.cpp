#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  int a, b, c, d;
  cin >> a >> b >> c >> d;

  if (b % a == 0) {
    int cong_boi = b / a;
    if (1ll * b * cong_boi == c && 1ll * c * cong_boi == d) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  } else {
    cout << "NO\n";
  }

  return 0;
}
