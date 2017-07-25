#include<bits/stdc++.h>
using namespace std;
int a[1000][1000];
int solve(int cap, int wt[], int val[], int n)
{
  if(cap<0)
    return (-1)*val[n+1];
  if(cap==0 || n<0)
  {
    return 0;
  }
  int ans1 = solve(cap, wt, val,n-1);
  int ans2 =val[n]+solve(cap-wt[n], wt, val, n-1);
  return max(ans1,ans2);
}
int main()
{

  int t;
  cin>>t;

  while(t--){

  int cap, n;
  cin>>n>>cap;
  int wt[n], val[n];

    for(int i=0;i<n;i++)
      cin>>val[i];

      for(int i=0;i<n;i++)
        cin>>wt[i];
  int ans = solve(cap, wt, val, n-1);
  cout<<ans<<endl;}
}
