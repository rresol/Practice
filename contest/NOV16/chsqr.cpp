#include<iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int k,i,j;
    cin>>k;
    int a[k+1][k+1];
    for(i=1;i<=k;i++)
    {
      for(j=1;j<=k;j++)
      {
        a[j][i] = (i+j-1)%k;
        if(a[j][i]==0)
        {
          a[j][i] = k;
        }
        if((i+j-1)%k==((k+1)/2))
        {
          a[j][i] = 1;
        }
        if((i+j-1)%k==1)
        {
          a[j][i] =(k+1)/2;
        }
      }
    }

    for(i=1;i<=k;i++)
    {
      for(j=1;j<=k;j++)
      {
        cout<<a[i][j]<<" ";
      }
      cout<<endl;
    }
  }
}
