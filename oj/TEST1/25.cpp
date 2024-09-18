#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  long long n;
  cin >> n;

  long long chia_3 = n / 3;
  long long chia_5 = n / 5;
  long long chia3_va_5 = n / 5 / 3;

  long long ans = chia_3 + chia_5 - chia3_va_5;

  cout << ans << endl;

  return 0;
}
