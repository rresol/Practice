#include<bits/stdc++.h>
using namespace std;
int solve(int n,int m)
{
  if(n==0 || m==0)
  {
    return 1;
  }
  return  (solve(n-1,m) + solve(n,m-1));
}
int main()
{
  int n,m;
  cin>>n>>m;
  int ans = solve(n-1,m-1);
  cout<<ans<<endl;
  return 0;
}
