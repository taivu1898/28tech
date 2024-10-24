#include <cmath>
#include <iomanip>
#include <iostream>
#include <utility>
#include <vector>

using namespace std;
using ll = long long;

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
  vector<pair<int, int>> points;
  while (n--) {
    int x, y;
    cin >> x >> y;
    points.push_back(make_pair(x, y));
  }

  vector<double> distance;
  for (auto p : points) {
    double dist = sqrt(p.first * p.first + p.second * p.second);
    distance.push_back(dist);
  }

  for (auto dist : distance) {
    cout << fixed << setprecision(2) << dist << ' ';
  }
  return 0;
}
