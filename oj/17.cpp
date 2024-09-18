#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  int dai, rong;
  cin >> dai >> rong;

  cout << "Chu vi HCN la : " << 1ll * (dai + rong) * 2 << endl;
  cout << "Dien tich HCN la : " << 1ll * dai * rong << endl;

  return 0;
}
