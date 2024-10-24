#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  int n;
  cin >> n;

  int countAlpha = 0;
  int sumDigit = 0;

  for (int i = 0; i < n; ++i) {
    char c;
    cin >> c;

    if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122)) {
      ++countAlpha;
    }
    if (c >= 48 && c <= 57) {
      sumDigit += (c - '0');
    }
  }

  cout << countAlpha << endl;
  cout << sumDigit << endl;

  return 0;
}
