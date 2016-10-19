#include<iostream>
using namespace std;

int recursive(int n, int k)
{
  if(k==0)
    return 1;
  if(n==k)
    return 1;
  return (recursive(n-1,k-1)+ recursive(n-1,k));
}

int bottomUp(int n, int k)
{
  int a[n+1][k+1];
  int i,j;
  for(i=0;i<=n;i++)
    {
      a[i][i] =1;
      a[i][0] =1;
    }

  for(i=1;i<=k;i++)
    a[0][i] =0;

  for(i=1;i<=n;i++)
  {
    for(j=1;j<=min(i,k);j++)
    {
      a[i][j] = a[i-1][j-1] + a[i-1][j];
    }
  }
  return a[n][k];

}
int main()
{
  int n,k;
  cin>>n>>k;
  int result;
  result = recursive(n,k);
  cout<<result<<endl;
  cout<<bottomUp(n,k)<<endl;
  return 0;
}
