# Vector trong C++

**Vector** được coi là _mảng động_ có thể tự động thay đổi kích thước khi thêm hay xóa phần tử khỏi vector.

> [!NOTE]
> Không phù hợp khi bài toán yêu cầu nhiều thao tác tìm kiếm hay xóa phần tử được thực hiện nhiều lần

## Cú pháp và khai báo

```txt
vector<Type> name;
```

_Một vài cách khai báo khác_

```cpp
#include <iostream>
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

  // Khai báo vector rỗng
  vector<int> v;

  // Khai báo vector với danh sách khởi tọa
  vector<int> v2 = {1, 2, 2, 3, 4, 5};

  // Khai báo vector với số lượng phần tử n
  int n = 5;
  vector<int> v3(n);

  // Khai báo vector và khởi tạo tất cả giá trị khởi tạo trong vector là 18
  int val = 18;
  vector<int> v4(n, val);

  return 0;
}
```

## Phương thức của Vector
