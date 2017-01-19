#include<iostream>
using namespace std;
int main()
{
  int arr[] = {0,1};
  arr[0] = arr[0]<<1;
  arr[1] = arr[1]<<1;
  cout<<arr[0]<<endl;
  cout<<arr[1]<<endl;
}
