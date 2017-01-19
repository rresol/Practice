#include<iostream>
using namespace std;
int main()
{
  int n,res;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  res = a[0];
  for(int i=1;i<n;i++)
  {
    res = res ^ a[i];
  }
  cout<<res<<endl;
  return 0;
}
