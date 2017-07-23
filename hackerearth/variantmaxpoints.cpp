#include<bits/stdc++.h>
using namespace std;

int solve()
{
  workout[0][0] = a[0][0];
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
    {
      if(i==0)
      {
        workout[i][j] = workout[i][j-1]+a[i][j];
      }
      if(j==0)
      {
        workout[i][j] = workout[i-1][j]+a[i][j];
      }
    }
  }
}


int main()
{
  int n,m;
  cin>>n>>m;
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
    {
      cin
    }
  }
}
