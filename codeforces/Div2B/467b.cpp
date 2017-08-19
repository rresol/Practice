#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,m,k;
  cin>>n>>m>>k;
  int a[m+1];
  for(int i=0;i<=m;i++)
  {
    cin>>a[i];
  }
  int sum =0;
  for(int i=0;i<m;i++)
  {
    int v1 = __builtin_popcount(a[i]&a[m]);
    int v2 = __builtin_popcount(a[i]|a[m]);
    if((v2-v1)<=k)
    {
      sum++;
    }
  }
  cout<<sum<<endl;
  return 0;
}
