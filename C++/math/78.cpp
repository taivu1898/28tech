#include <iostream>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;
const int MAX = 1000001;

int arr[MAX];

ll display_fibonacci_number(ll n) {
  ll now = 1, cnue = 1, ans;
  for (int i = 3; i <= 92; ++i) {
    ans = now + cnue;
    if (ans >= n) {
      break;
    }
    now = cnue;
    cnue = ans;
  }

  return ans;
}
int main() {
  cin.tie(nullptr)->sync_with_stdio(false);

  ll n;
  cin >> n;

  cout << display_fibonacci_number(n) << endl;

  return 0;
}
