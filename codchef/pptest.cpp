#include<iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)

  {
    long long int n,w;
    cin>>n>>w;
    long long int c[n],p[n],t[n];
    for(int i=0;i<n;i++)
    {
      cin>>c[i]>>p[i]>>t[i];
    }
    long long int k[n+1][w+1];
    int i,j;
    for(i=0;i<=n;i++)
    {
      for(j=0;j<=w;j++)
      {
        if(i==0||k==0)
        {
          k[i][j] =0;
        }
        else if(t[i-1]<=j)
        {
          k[i][j] = max((c[i-1]*p[i-1] + k[i-1][j-t[i-1]]),k[i-1][j]);
        }
        else{
          k[i][j] = k[i-1][j];
        }
      }
    }
    cout<<k[n][w]<<endl;

  }
}
