#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  int n;
  cin >> n;

  int cnt = 1;
  for (int i = 1; i <= n; ++i) {
    for (int j = 1; j <= n; ++j) {
      cout << cnt << ' ';
      ++cnt;
    }
    cout << endl;
  }
  cout << endl;

  for (int i = 1; i <= n; ++i) {
    int ans = i;
    for (int j = 1; j <= n; ++j) {
      cout << ans << ' ';
      ans++;
    }
    cout << endl;
  }
  cout << endl;

  for (int i = 1; i <= n; ++i) {
    int ans = i;
    for (int j = 1; j <= n - i; ++j) {
      cout << "~";
    }
    for (int j = 1; j <= i; ++j) {
      cout << i;
    }
    cout << endl;
  }
  cout << endl;

  for (int i = 1; i <= n; ++i) {
    int kc = n - 1, ans = i;
    for (int j = 1; j <= i; ++j) {
      cout << ans << ' ';
      ans += kc;
      --kc;
    }
    cout << endl;
  }

  return 0;
}
