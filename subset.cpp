#include<iostream>
using namespace std;

int recursive(int a[], int sum, int n)
{
  if(sum<0)
    return 0;

  if(!sum)
    return 1;
  if(n==1)
    return(!(sum-a[n-1]));

  return recursive(a,sum-a[n-1],n-1) || recursive(a,sum,n-1);
}

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n ;
    cin>>n;
    int a[n];
   int sum = 9;
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
    }
    cin>>sum;
    cout<<recursive(a,sum,n);
  }
}
