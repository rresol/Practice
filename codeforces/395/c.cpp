#include<bits/stdc++.h>
using namespace std;
vector<int>dp(2*100005,-1);
vector<int>a[2*100005];
int color[2*100005];

int dfs(int i)
{
  visited[i] = true;
  int ans =1;
  for(int j=0;i<a[j].size();j++)
  {
    if(!visited[a[i][j]])
    {
      ans &= (color[i]==color[j])&dfs(a[i][j]);
    }
  }
}
int main()
{
  int n;
  cin>>n;
  for(int i=0;i<n-1;i++)
  {
    int u,v;
    cin>>u>>v;
    a[u].push_back(v);
    a[v].push_back(u);
  }
  for(int i=1;i<n+1;i++)
  {
    cin>>color[i];
    //cout<<color[i]<<endl;
  }
  int ans;
  int i;
  for(i=1;i<=n;i++)
  {

     ans=1;
    for(int j=0;j<a[i].size();j++)
    {
      if(a[i][j]!=i){
        //cout<<a[i][j]<<endl;
      ans &= (val(a[i][j],-1));}
    }
    //cout<<ans<<endl;
    if(ans==1)
      break;
  }
  if(ans==1)
  {
    cout<<"YES"<<endl;
    cout<<i<<endl;
  }
  else
  {
    cout<<"NO"<<endl;
  }
}
