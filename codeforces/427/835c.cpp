#include<bits/stdc++.h>
using namespace std;
int dp[11][101][101];
int main()
{
  int n,q,c;
  cin>>n>>q>>c;
  for(int i=0;i<n;i++)
  {
    int x,y,s;
    cin>>x>>y>>s;
    dp[s][x][y]++;
  }
  for(int p=0;p<=c;p++)
  {
    for(int x=1;x<101;x++)
    {
      for(int y=1;y<101;y++)
      {
        dp[p][x][y] = dp[p][x][y]+ dp[p][x-1][y]+dp[p][x][y-1]-dp[p][x-1][y-1];
      }
    }
  }
  while(q--)
  {
    int ans =0;
    int t,x1,y1,x2,y2;
    cin>>t>>x1>>y1>>x2>>y2;
    for(int p=0;p<=c;p++)
    {
      int brightness = (p+t)%(c+1);
      int val= dp[p][x2][y2]-dp[p][x1-1][y2]-dp[p][x2][y1-1]+dp[p][x1-1][y1-1];
      ans+= (val*brightness);
    }
    cout<<ans<<endl;
  }
}
