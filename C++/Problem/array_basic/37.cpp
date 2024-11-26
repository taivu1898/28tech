#include <iostream>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;
const int MAX = 1000001;

int arr[MAX];
int mark[MAX];

int main() {
  cin.tie(nullptr)->sync_with_stdio(false);

  int n;
  cin >> n;

  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
    mark[arr[i]]++;
  }

  int t;
  cin >> t;
  while (t--) {
    int x;
    cin >> x;

    cout << (mark[x] ? "YES\n" : "NO\n");
  }
  return 0;
}
