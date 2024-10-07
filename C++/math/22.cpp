#include <cmath>
#include <iostream>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;
const int MAX = 1000001;

int arr[MAX];

int main() {
  cin.tie(nullptr)->sync_with_stdio(false);

  ll a, b;
  cin >> a >> b;

  int sa = ceil(sqrt(a));
  int sb = sqrt(b);

  cout << sb - sa + 1 << endl;

  return 0;
}
