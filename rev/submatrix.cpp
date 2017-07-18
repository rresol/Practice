#include<bits/stdc++.h>
using namespace std;
int main()
{
  int m,n;
  cin>>m>>n;
  int a[m][n];
  for(int i=0;i<m;i++)
  {
    for(int j=0;j<n;j++)
    {
      cin>>a[i][j];
    }
  }
  int ma = INT_MIN;
  int ans[m][n];
  for(int i=0;i<m;i++)
  {
    for(int j=0;j<n;j++)
    {
      if(i==0 || j==0)
      {
        ans[i][j] = a[i][j];
      }
      else
      {
        if(a[i][j]){
        ans[i][j]  = min(a[i-1][j-1],min(a[i][j-1],a[i-1][j])) + 1;
      }
      else
      {
        ans[i][j] = 0;
      }
      }
      ma = max(ma,ans[i][j]);
    }


  }
  for(int i=0;i<m;i++)
  {
    for(int j=0;j<n;j++)
    {
      cout<<ans[i][j]<<" ";
    }
    cout<<endl;
  }
  cout<<ma<<endl;
}
