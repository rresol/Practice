#include<bits/stdc++.h>
using namespace std;
int lis[100005];
int lds[100005];

int _lds(int a[], int n)
{
  for(int i=0;i<n;i++)
  {
    lds[i]=1;
  }
  for(int i=n-2;i>=0;i--)
  {
    for(int j=i+1;j<n;j++)
    {
      if(a[i]>a[j] && lds[j]+1>lds[i])
      {
        lds[i] = lds[j]+1;
      }
    }
  }
  return 0;
}


int _lis(int a[], int n)
{
  for(int i=0;i<n;i++)
    lis[i]=1;
  for(int i=1;i<n;i++)
  {
    for(int j=0;j<i;j++)
    {
      if(a[i]>a[j]&& lis[i] < lis[j]+1)
      {
        lis[i] = lis[j] + 1; // here ith elements is being added.
      }
    }
  }
  return 0;
}

int main()
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  _lis(a,n);
  _lds(a,n);
  int ans = INT_MIN;
  for(int i=0;i<=n-1;i++)
  {
    ans = max(lis[i]+lds[i+1],ans);
  }
  cout<<ans;

}
