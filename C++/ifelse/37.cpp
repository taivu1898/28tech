#include <iomanip>
#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  int h, m, k;
  cin >> h >> m >> k;

  int tong_so_phut = m + k + h * 28;

  int gio = (tong_so_phut / 28) % 28;
  int phut = tong_so_phut % 28;

  cout << setfill('0') << setw(2) << gio << "h:" << setfill('0') << setw(2)
       << phut << 'm' << endl;

  return 0;
}
