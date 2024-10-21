
#include <iostream>
#include <vector>

using namespace std;

// Hàm xoay bên trái
void rotate_left(vector<vector<int>> &grid) {
  int temp = grid[0][0];
  grid[0][0] = grid[0][1];
  grid[0][1] = grid[0][2];
  grid[0][2] = grid[1][2];
  grid[1][2] = grid[1][1];
  grid[1][1] = grid[1][0];
  grid[1][0] = temp;
}

// Hàm xoay bên phải
void rotate_right(vector<vector<int>> &grid) {
  int temp = grid[0][0];
  grid[0][0] = grid[1][0];
  grid[1][0] = grid[1][1];
  grid[1][1] = grid[1][2];
  grid[1][2] = grid[0][2];
  grid[0][2] = grid[0][1];
  grid[0][1] = temp;
}

int main() {
#ifndef ONLINE_JUDGE
  FILE *infile = nullptr, *outfile = nullptr;
  errno_t err1 = freopen_s(&infile, "input.txt", "r", stdin);
  errno_t err2 = freopen_s(&outfile, "output.txt", "w", stdout);
#endif

  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  vector<vector<int>> grid(2, vector<int>(3));

  // Nhập dữ liệu đầu vào
  for (int i = 0; i < 2; ++i) {
    for (int j = 0; j < 3; ++j) {
      cin >> grid[i][j];
    }
  }

  int N;
  cin >> N; // Số lượt quay
  string commands;
  cin >> commands; // Chuỗi các lệnh 'L' hoặc 'R'

  // Thực hiện các lệnh xoay
  for (char command : commands) {
    if (command == 'L') {
      rotate_left(grid); // Xoay bên trái
    } else if (command == 'R') {
      rotate_right(grid); // Xoay bên phải
    }
  }

  // In ra kết quả cuối cùng
  for (int i = 0; i < 2; ++i) {
    for (int j = 0; j < 3; ++j) {
      cout << grid[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}
