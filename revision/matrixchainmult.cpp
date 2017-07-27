#include<bits/stdc++.h>
using namespace std;
int solve(int a[], int i, int j)
{
  if(i==j)
  {
    return 0;
  }
  int m = INT_MAX;
  for(int k=i;i<j;i++)
  {
    int cost = solve(a,i,k)+solve(a,k+1,j)+a[i-1]*a[k]*a[j];
    //m = min(cost, m);
    if(m>cost)
    {
      m = cost;
    }
  }
  cout<<m<<endl;
  return m;

}
int dp(int p[], int n)
{
  int m[n][n];
  for(int i=0;i<n;i++)
  {
    m[i][i] = 0;
  }
  for(int l = 2;l<n;l++)
  {

    for(int i=1;i<n-l+1;i++)
    {
      int j = i+l-1;
      m[i][j] = INT_MAX;
      for(int k=i;k<=j-1;k++)
      {
        int q = m[i][k]+m[k+1][j]+p[i-1]*p[k]*p[j];
        m[i][j] = min(q,m[i][j]);
      }
    }
  }
  return m[1][n-1];
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
  cout<<solve(a,1,n-1)<<endl;
  cout<<dp(a,n);

}
