# Iterator trong C++

Iterator trong C++ là một đối tượng dùng để duyệt qua các phần tử trong một container (như vector, list, set, v.v.) mà không cần biết chi tiết về cấu trúc bên trong của container đó.

Iterator giống như một con trỏ nhưng có nhiều tính năng và cách sử dụng linh hoạt hơn.

## Chức năng

- **Duyệt qua từng container:** Iterator cho phép duyệt qua các phần tử của container mà không cần biết cụ thể về cách mà container được tổ chức
- **Truy cập phần tử:** truy cập các giá trị của phần tử Iterator đang trỏ tới bằng cách sử dụng toán tử giải tham chiếu (`*`) hoặc chỉ số (`[]`)

## Các loại Iterator

- **Input Iterator:** chỉ cho phép đọc phần tử từ container
- **Output Iterator:** chỉ cho phép ghi phần tử từ container
- **Forward Iterator:** cho phép di chuyển tới các phần tử tiếp theo, đọc và ghi
- **Bidirectional Iterator:** di chuyển tới cả hai hướng (tiến và lùi)
- **Random Access Iterator:** truy cập bất kỳ phần tử nào trong container bằng cách sử dụng chỉ số, như một mảng
