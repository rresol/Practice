#include<bits/stdc++.h>
using namespace std;

int a[105][105];
bool dp[505][105][105];
int v;
int ans=0;
int solve(int n, int m, int k)
{
  //{
    if(dp[k][n][m]!=INT_MAX)return dp[k][n][m];
   //return solve(n,m-1,k-a[n][m]);

  if(n==0 && m==0)
  {

    if(dp[k][n][m]!=INT_MAX)return dp[k][n][m];
    int x = k-a[n][m];
    if(x>=0){
      //cout<<k<<endl;
      dp[k][n][m]=(v-x);
      return (v-x);
    }
    else{
      dp[k][n][m]=0;
      return 0;
    }
  }
  if(k<0)return 0;
  if(n==0){
    if(dp[k][n][m]!=INT_MAX)return dp[k][n][m];
   return solve(n,m-1,k-a[n][m]);
 }
  if(m==0){
    if(dp[k][n][m]!=INT_MAX)return dp[k][n][m];
   return solve(n-1,m,k-a[n][m]);
 }
  dp[k][n][m] = max(solve(n-1,m,k-a[n][m]),max(solve(n-1,m-1,k-a[n][m]),solve(n,m-1,k-a[n][m])));
  return max(solve(n-1,m,k-a[n][m]),max(solve(n-1,m-1,k-a[n][m]),solve(n,m-1,k-a[n][m])));
}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t;
  cin>>t;
  while(t--){
    for(int i=0;i<505;i++)
    {
      for(int j=0;j<105;j++)
      {
        for(int k=0;k<105;k++)dp[i][j][k]=0;
      }
    }
    int n,m,k;
    cin>>n>>m>>k;
    v = k;
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<m;j++)
      {
        cin>>a[i][j];
      }
    }
    int val = solve( n-1,m-1,k);
    if(val)
    {

      cout<<val<<endl;
    }
    else cout<<-1<<endl;
  }

}
