#include<bits/stdc++.h>
using namespace std;
int coins[100005];
int n,m;

int recursive(int val)
{
  if(val==0)
    return 1;
  if(val<0)
    return 0;
  int ans = 0;
  cout<<val<<endl;
  return recursive(val-coins[n-1]) + recursive(val-coins[n-2]) + recursive(val-coins[n-3]);
}
int main()
{
  cin>>n>>m;
  for(int i=0;i<n;i++)
  {
    cin>>coins[i];
  }
  int ans = recursive(m);
  cout<<ans<<endl;
}
