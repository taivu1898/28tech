#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

const int MOD = 10000007;
vector<int> unique_vector(vector<int> v) {
  vector<int> ans;
  for (int i = 0; i < v.size(); ++i) {
    if (v[i] != v[i + 1]) {
      ans.push_back(v[i]);
    }
  }
  return ans;
}

vector<int> nhap() {
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; ++i) {
    cin >> v[i];
  }
  return v;
}

void in(vector<int> v) {
  for (auto &i : v) {
    cout << i << ' ';
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
  vector<int> v = nhap();
  vector<int> res = unique_vector(v);
  in(res);
  return 0;
}
