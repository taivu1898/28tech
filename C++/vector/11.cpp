#include <cmath>
#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;
const int MAX = 1000001;
const int FIB_LIMIT = 93;

int arr[MAX], mark[MAX];
ll prefix[MAX], fibon[FIB_LIMIT];

int snt(int n) {
  for (int i = 2; i <= sqrt(n); ++i) {
    if (n % i == 0) {
      return false;
    }
  }

  return n > 1;
}

void nhap(vector<int> &v) {
  int n;
  cin >> n;

  for (int i = 0; i < n; ++i) {
    int tmp;
    cin >> tmp;
    v.push_back(tmp);
  }
}

void in(vector<int> v) {
  for (auto i : v) {
    cout << i << ' ';
  }
}

vector<int> prime_list(vector<int> v) {
  vector<int> newV;
  for (auto i : v) {
    if (snt(i)) {
      newV.push_back(i);
    }
  }
  return newV;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  vector<int> v;
  nhap(v); // Hàm nhập viết ntn?
  vector<int> res = prime_list(v);
  in(res);
  return 0;
}
