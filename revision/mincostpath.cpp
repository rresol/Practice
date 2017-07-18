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
  int min_cost[m][n];
  min_cost[0][0] = a[0][0];
  min_cost[0][0] = a    [0][0];
  for(int i=1;i<n;i++)
  {
    min_cost[0][i] = a[0][i] + min_cost[0][i-1];
  }
  for(int i=1;i<m;i++)
  {
    min_cost[i][0] = a[i][0]+min_cost[i-1][0];
  }

  for(int i=1;i<m;i++)
  {
    for(int j=1;j<n;j++)
    {
      min_cost[i][j] = a[i][j] + min(min_cost[i-1][j-1],min(min_cost[i-1][j],min_cost[i][j-1]));
    }
  }
  for(int i=0;i<m;i++)
  {
    for(int j=0;j<n;j++)
    {
      cout<<min_cost[i][j]<<" ";
    }
    cout<<endl;
  }
  cout<<min_cost[m-1][n-1]<<endl;
}
