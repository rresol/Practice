#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int r,c,i,j;
    cin>>r>>c;
    int a[r][c];
    int minpt[r][c];
    int sum[r][c];
    for(i=0;i<r;i++)
    {
      for(j=0;j<c;j++)
      {
        cin>>a[i][j];
      }
    }

    for(i=0;i<r;i++)
    {
      for(j=0;j<c;j++)
      {
        if(i==0&&j==0)
          sum[i][j] = a[i][j];
        else if(i==0)
          sum[i][j] = a[i][j-1] + a[i][j];
        else if(j==0)
          sum[i][j] = a[i-1][j] + a[i][j];
        else{
          sum[i][j] = min(fabs(a[i-1][j-1] + a[i][j]),fabs(a[i][j-1] + a[i][j]))
        }
      }
    }
  }
}
