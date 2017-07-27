#include<bits/stdc++.h>
using namespace std;
int solve(int n, int val[])
{
  int ans[n+1];
  ans[0]=0;
  for(int i=1;i<=n;i++)
  {
    int max_val = INT_MIN;
    for(int j=0;j<i;j++)
    {
      max_val = max(max_val,val[j]+ans[i-j-1]);
    }
    val[i] = max_val;
  }
  return val[n+1];
}
int main()
{
  int n;
  cin>>n;
  int val[n+1];
  for(int i=0;i<n;i++)
  {
    cin>>val[i]>>endl;
  }
 int ans = solve(n,val);

 cout<<ans<<endl;
 return 0;
}
