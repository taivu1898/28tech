#include <iostream>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;
const int MAX = 1000001;
const int FIB_LIMIT = 93;

int arr[MAX], mark[MAX];
ll prefix[MAX], fibon[FIB_LIMIT];

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n = 0, tmp;
  while (cin >> tmp) {
    arr[n++] = tmp;
  }

  int chan = 0;
  for (int i = 0; i < n; ++i) {
    if (arr[i] % 2 == 0) {
      ++chan;
    }
  }

  if (chan == n - chan) {
    cout << "CHANLE";
  } else if (chan < n - chan) {
    cout << "LE";
  } else {
    cout << "CHAN";
  }

  cout << "\n";

  return 0;
}
