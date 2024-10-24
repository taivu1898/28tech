#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

const int MOD = 10000007;

void nhap(vector<vector<int>> &v, int n, int m) {
  for (int i = 0; i < n; ++i) {
    vector<int> row;
    for (int j = 0; j < m; ++j) {
      int tmp;
      cin >> tmp;
      row.push_back(tmp);
    }
    v.push_back(row);
  }
}

void xuat(vector<vector<int>> v, int n, int m) {
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      cout << v[i][j] << ' ';
    }
    cout << endl;
  }
}

void lat(vector<vector<int>> &v, int n, int m) {
  for (int i = 0; i < n; ++i) {
    reverse(v[i].begin(), v[i].end());
  }
}

int main() {
#ifndef ONLINE_JUDGE
  FILE *infile = nullptr, *outfile = nullptr;
  errno_t err1 = freopen_s(&infile, "input.txt", "r", stdin);
  errno_t err2 = freopen_s(&outfile, "output.txt", "w", stdout);
#endif

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m;
  cin >> n >> m;
  vector<vector<int>> v;
  nhap(v, n, m);
  lat(v, n, m);
  xuat(v, n, m);

  return 0;
}
