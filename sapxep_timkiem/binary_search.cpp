#include <stdio.h>
 
// Hàm tìm kiếm nhị phân sử dụng giải thuật đệ quy
int binarySearch(int arr[], int n, int x) {
  int r = n - 1; // chỉ số phần tử cuối
  int l = 0; // Chỉ số phần tử đầu tiên
  while (r >= l) {
    int mid = l + (r - l) / 2; // Tương đương (l+r)/2 nhưng ưu điểm tránh tràn số khi l,r lớn
 
    // Nếu arr[mid] = x, trả về chỉ số và kết thúc.
    if (arr[mid] == x)
      return mid;
 
    // Nếu arr[mid] > x, cập nhật lại right
    if (arr[mid] > x)
      r = mid - 1;
    // Nếu arr[mid] < x, cập nhật lại left
    if (arr[mid] < x)
      l = mid + 1;
  }
 
  // Nếu không tìm thấy
  return -1;
}
 
int main(void) {
  int arr[] = {
    2,
    3,
    4,
    10,
    40
  };
  int n = sizeof(arr) / sizeof(arr[0]);
  int x = 10;
  int result = binarySearch(arr, n, x);
  if (result == -1)
    printf("%d xuat hien tai chi so %d", x, result);
  else
    printf("%d xuat hien tai chi so %d", x, result);
  return 0;
}
 