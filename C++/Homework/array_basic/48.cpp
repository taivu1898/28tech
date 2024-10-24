#include <iostream>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;

int length_max(int a[], int n) {
  int ans = -1, dem = 1; // đếm a[0]
  for (int i = 1; i < n; i++) {
    if (a[i] > a[i - 1]) {
      ++dem;
    } else {
      if (dem > ans)
        ans = dem;
      dem = 1;
    }
  }
  return ans;
}

int main() {
#ifndef ONLINE_JUDGE
  FILE *infile = nullptr, *outfile = nullptr;
  errno_t err1 = freopen_s(&infile, "input.txt", "r", stdin);
  errno_t err2 = freopen_s(&outfile, "output.txt", "w", stdout);
#endif

  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;

  for (int test = 1; test <= t; test++) {
    int n;
    cin >> n;
    int a[n + 1];

    // Nhập mảng a
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    a[n] = -1; // Đánh dấu kết thúc dãy
    ++n;

    int m = length_max(a, n);
    cout << "Test #" << test << " : " << endl;
    cout << m << endl;

    int dem = 1; // đếm a[0]
    for (int i = 1; i < n; i++) {
      if (a[i] > a[i - 1]) {
        ++dem;
      } else {
        if (dem == m) {
          for (int j = i - m; j <= i - 1; j++) {
            cout << a[j] << " ";
          }
          cout << endl;
        }
        dem = 1;
      }
    }
  }
}
