#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, char *argv[]) {
  cin.tie(nullptr)->sync_with_stdio(false);

  double weight, height;
  cin >> weight >> height;

  double BMI = weight / ((height / 100) * (height / 100));

  if (BMI < 18.5) {
    cout << "Under weight";
  } else if (BMI < 25) {
    cout << "Normal";
  } else if (BMI < 30) {
    cout << "Over weight";
  } else if (BMI < 35) {
    cout << "Obesity 1";
  } else if (BMI < 40) {
    cout << "Obesity 2";
  } else {
    cout << "Extreme obesity";
  }
  return 0;
}
