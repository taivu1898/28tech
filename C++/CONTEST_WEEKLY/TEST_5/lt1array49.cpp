#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int cnt[1000001];

void pt1(int n) {
  for (int i = 2; i <= sqrt(n); i++) {
    while (n % i == 0) {
      cnt[i]++;
      n /= i;
    }
  }
  if (n > 1)
    cnt[n]++;
}

void pt2(int n) {
  for (int i = 2; i <= sqrt(n); i++) {
    while (n % i == 0) {
      cnt[i]--;
      n /= i;
    }
  }
  if (n > 1)
    cnt[n]--;
}

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    pt1(x);
  }
  for (int i = 0; i < m; i++) {
    int x;
    cin >> x;
    pt2(x);
  }
  for (int i = 0; i <= 1000000; i++) {
    if (cnt[i] != 0) {
      cout << "29tech\n";
      return 0;
    }
  }
  cout << "28tech\n";
}
