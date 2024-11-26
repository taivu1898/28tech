#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  ll n;
  cin >> n;

  ll h = n / 3600;
  ll m = n % 3600 / 60;
  ll s = n % 3600 % 60;

  cout << h << "h : ";
  cout << m << "m : ";
  cout << s << 's' << endl;

  return 0;
}
