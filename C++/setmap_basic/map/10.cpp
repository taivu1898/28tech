#include <iostream>
#include <vector>

using namespace std;

const int MAX_CHAR = 256;
bool presentInB[MAX_CHAR] = {false};

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

  vector<char> A(n);
  for (int i = 0; i < n; ++i) {
    cin >> A[i];
  }

  vector<char> B(m);
  for (int i = 0; i < m; ++i) {
    cin >> B[i];
  }

  for (char c : B) {
    presentInB[(unsigned char)c] = true;
  }

  bool printed[MAX_CHAR] = {false};

  for (char c : A) {
    if (presentInB[(unsigned char)c] && !printed[(unsigned char)c]) {
      cout << c << ' ';
      printed[(unsigned char)c] = true;
    }
  }

  cout << endl;
  return 0;
}
