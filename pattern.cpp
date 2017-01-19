#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int a[n+1];
  a[1] = 1;
  a[2] = 0;
  a[3] = 1;
  for(int i=4;i<=n;i++)
  {
    if((!a[i-1])&&(!a[i-3]))
    {
      a[i] =  0;
    }
    else if(a[i-1]&&a[i-3])
    {
      a[i] = 0;
    }
    else
    {
      a[i] = 1;
    }

  }
  for(int i=0;i<n;i++)
  {
    cout<<a[i]<<endl;
  }
}
