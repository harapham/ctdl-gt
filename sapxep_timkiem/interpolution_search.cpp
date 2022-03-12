#include <iostream>
 using namespace std;
int InterPolationSearch(int arr[], int n, int x)
{
  int left = 0;
  int right = n-1;
  while (left <= right && x >= arr[left] && x <= arr[right])
  {
    double val1 = (double) (x - arr[left]) / (arr[right]-arr[left]);
    int val2 = (right-left);
    int Search = left + val1*val2;
  
    if (arr[Search] == x)
      return Search;
  
    if (arr[Search] < x)
      left = Search + 1;
    else
      right = Search - 1;
  }
  return -1;
}
 
int main()
{
  int arr[] =  {10, 12, 13, 16, 18, 19, 20, 21, 22, 23, 24, 33, 35, 42, 47};
  int n = sizeof(arr)/sizeof(arr[0]);
  int x;
 
  cout<<"Nhap vao so can tim trong mang: ";
  cin>>x;
  int index = InterPolationSearch(arr, n, x);
  
  if (index != -1)
    cout << "Da tim thay so "<<x<< " trong mang tai vi tri " << index;
  else
    cout << "khong tim thay so "<<x<<" trong mang.";
}
