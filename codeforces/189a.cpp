#include<bits/stdc++.h>
using namespace std;
int main()
{
  int d[100005];
  d[0] = 0;
  ios::sync_with_stdio(false);
  int n;
  cin>>n;
  int a,b,c;
  cin>>a>>b>>c;

  for(int i=1;i<=n;i++)
  {
    int ans = INT_MIN;
    if((i-a)>=0)
    {
      if(d[i-a]>=0)
      {
        ans = max(ans, 1 + d[i-a]);
      }
    }
     if((i-b)>=0)
    {
      if(d[i-b]>=0)
      {
        ans  = max(ans,1 + d[i-b]);
      }
    }
     if((i-c)>=0)
    {
      if(d[i-c]>=0)
      {
        ans = max(ans, 1 + d[i-c]);
        //cout<<ans;
      }
    }
    if(ans>=0)
    {
      d[i] = ans;
    }
    else
    {
      d[i] = -1;
    }
    //cout<<d[i]<<endl;
  }
  cout<<d[n]<<endl;
  return 0;
}
