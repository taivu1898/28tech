#include <iostream>
#include <math.h>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;
const int MAX = 1000001;
const int FIB_LIMIT = 93;

int arr[MAX], mark[10];
ll prefix[MAX], fibon[FIB_LIMIT];

int snt(int n) {
  for (int i = 2; i <= sqrt(n); ++i) {
    if (n % i == 0) {
      return false;
    }
  }
  return n > 1;
}

int main() {
#ifndef ONLINE_JUDGE
  FILE *infile = nullptr, *outfile = nullptr;
  errno_t err1 = freopen_s(&infile, "input.txt", "r", stdin);
  errno_t err2 = freopen_s(&outfile, "output.txt", "w", stdout);
#endif
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
  }

  int count = 0;
  for (int i = 0; i < n; ++i) {
    int current_sum = 0;
    for (int j = i; j < n; ++j) {
      current_sum += arr[j];

      if (snt(current_sum)) {
        ++count;
      }
    }
  }

  cout << count << endl;
  return 0;
}
