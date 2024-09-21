#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  int n;
  cin >> n;

  int nam = n / 365;
  int tuan = n % 365 / 7;
  int ngay = n % 365 % 7;
  cout << nam << ' ' << tuan << ' ' << ngay << endl;

  return 0;
}
