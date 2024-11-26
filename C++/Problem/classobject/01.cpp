#include <iomanip>
#include <iostream>
#include <string>

using namespace std;
using ll = long long;

const int MOD = 100000007;

struct Student {
  string id, name, dob, id_class;
  double gpa;
};

int main(int argc, char *argv[]) {
#ifndef ONLINE_JUDGE
  FILE *infile = nullptr, *outfile = nullptr;
  errno_t err1 = freopen_s(&infile, "input.txt", "r", stdin);
  errno_t err2 = freopen_s(&outfile, "output.txt", "w", stdout);
#endif

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string id, name, dob, id_class;
  getline(cin, id);
  getline(cin, name);
  getline(cin, dob);
  getline(cin, id_class);
  double gpa;
  cin >> gpa;

  cout << id << ' ' << name << ' ' << dob << ' ' << id_class << fixed
       << setprecision(2) << ' ' << gpa << endl;

  return 0;
}
