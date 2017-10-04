#include<bits/stdc++.h>
using namespace std;
vector<int>apples(1005);
vector<int>milk(1005);
int n;
int dp[1005][1005];
int solve(int i, int e, int n)
{
  if(i==n)return 0;
  if(dp[i][e]!=-1)return dp[i][e];
  int res =0;
  if(e>0){
    res = solve(i+1, e-1,n)+apples[i];
    res = max(res, solve(i+1, min(e-1+milk[i],n),n));
  }
  else if(milk[i]!=0)
  {
    res = solve(i+1, min(e+milk[i]-1,n),n);
    res = max(res, apples[i]);
  }
  else{

    res = apples[i];
  }
  return dp[i][e] = res;

}

int main()
{
  int t;
  cin>>t;
  while(t--)
  {

    int p;
    cin>>n>>p;
    p = min(p,n);
    for(int i=0;i<n;i++)
      cin>>milk[i];
    for(int i=0;i<n;i++)
      cin>>apples[i];
    if(p==0)cout<<0<<endl;
    else
        cout<<solve(0,p-1,n)<<endl;
  }
}
