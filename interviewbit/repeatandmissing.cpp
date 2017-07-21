#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int a[n];
  int xor1 =0, xor2 = 0;
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
    xor1^=a[i];
    xor2^=(i+1);
  }
  int diff = xor2^xor1;
  int left_most_set = diff  & ~(diff-1);
  int x=0,y=0;
  for(int i=0;i<n;i++)
  {
    if(a[i] & left_most_set)
    {
      x^=a[i];

    }
    else
    {
      y^=a[i];
    }
  }
  for(int i=1;i<=n;i++)
  {
    if(i & left_most_set)
    {
      x^=i;

    }
    else
    {
      y^=i;
    }
  }
  int ans1,bns1;
  for(int i=0;i<n;i++)
  {
    if(a[i]^x==0)
    {
      a = x;
    }
    else if(a[i]^y==0)
    {
      a = y;
    }
  }
  cout<<x<<" "<<y<<endl;
}
