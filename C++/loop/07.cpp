#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  int n;
  cin >> n;

  int dem_uoc = 0;
  for (int i = 1; i <= n; ++i) {
    if (n % i == 0) {
      ++dem_uoc;
    }
  }
  cout << dem_uoc << endl;

  for (int i = 1; i <= n; ++i) {
    if (n % i == 0) {
      cout << i << ' ';
    }
  }

  return 0;
}
