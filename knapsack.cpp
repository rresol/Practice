#include<iostream>
using namespace std;

int recursive(int val[], int weight[], int n, int w)
{
  int result;
  if(w==0 || n==0)
  {
    return 0;
  }
  int reduced_mass = w - weight[n-1];
  int value = val[n-1];

//cout<<value<<endl;
  if(reduced_mass<0)
  {
    value = 0;
  }

result = max((recursive(val,weight,n-1,w)),(recursive(val,weight,n-1,(reduced_mass<0?0:reduced_mass))+value));
// cout<<value<<endl;
 //cout<<result<<endl;
  return result;
}
int bottomUp(int val[], int weight[], int n, int w)
{
  int result[n+1][w+1];
  int i,j;
  for(i=0;i<=n;i++)
  {
    for(j=0;j<=w;j++)
    {
      if(i==0||j==0)
      {
        result[i][j]=0;
      }
      else
      {
        int value = val[i-1];
        int reduced_mass = j - weight[i-1];
        if(reduced_mass<0)
        {
          value =0;
        }
        result[i][j] = max(result[i-1][j] , (result[i-1][reduced_mass<0?0:reduced_mass] + value));
      }
      //  cout<<result[i][j]<<endl;
    }
  }
return result[n][w];
}

int main()
{
  int t;
  cin>>t;
  while (t--){
      int n,w,i;
      cin>>n>>w;
      int val[n],weight[n];
      for(i=0;i<n;i++)
      {
        cin>>val[i];
      }
      for(i=0;i<n;i++)
      {
        cin>>weight[i];
      }
      cout<<bottomUp(val,weight,n,w)<<endl;
}
return 0;
}
