#include <cctype>
#include <iostream>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;
const int MAX = 1000001;
const int FIB_LIMIT = 93;

char arr[MAX], mark[MAX];
ll prefix[MAX], fibon[FIB_LIMIT];

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
  }

  for (int i = 0; i < n; ++i) {
    char ans = tolower(arr[i]);
    if (arr[i] == 'e' || arr[i] == 'E') {
      cout << ans << ' ';
    }
    if (arr[i] == 'u' || arr[i] == 'U') {
      cout << ans << ' ';
    }
    if (arr[i] == 'o' || arr[i] == 'O') {
      cout << ans << ' ';
    }
    if (arr[i] == 'a' || arr[i] == 'A') {
      cout << ans << ' ';
    }
    if (arr[i] == 'i' || arr[i] == 'I') {
      cout << ans << ' ';
    }
  }

  cout << endl;

  for (int i = n - 1; i >= 0; --i) {
    char ans = tolower(arr[i]);
    if (ans != 'e' && ans != 'u' && ans != 'o' && ans != 'a' && ans != 'i') {
      cout << ans << ' ';
    }
  }
  return 0;
}
