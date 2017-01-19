#include<iostream>
using namespace std;
int ans[1000];
int subsetsum(int a[],int start, int n, int sum,int j)
{
  if(sum<0)
  {
    return 0;
  }
  if(sum==0)
  {
    return 1;
  }
  if(start==n&&sum!=0)
    return 0;
  for(int i=start;i<n;i++)
  {
    ans[j++] = a[i];

    if(!(subsetsum(a,i+1,n,sum-a[i],j)))
    {

      j--;
      ans[j] =-1;
    }
    else
    {
      break;
    }
        }
        if(ans[j]==-1)
        {
          return 0;
        }
        return 1;
}

int main()
{
  int t;
  cin>>t;
  while(t--){
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  int sum;
  cin>>sum;
  int j=0;
  subsetsum(a,0,n,sum,j);
  for(int i=0;i<j;i++)
  {
    if(ans[i]!=0);
      {cout<<ans[i]<<endl;}
  }
}}
