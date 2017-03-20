#include<bits/stdc++.h>
using namespace std;
int n;
int p[303];
int a[303];
int vis[303];
vector<vector<int> >adj;
vector<int>val;
vector<int>pos;

void dfs(int i)
{
  vis[i]= 1;
  val.push_back(p[i]);
  pos.push_back(i);
  for(int j=0;j< adj[i].size();j++)
  {
    int u = adj[i][j];
    if(!vis[u]) dfs(u);
  }
}

int main()
{
  int u;
  scanf("%d",&n);
  for(int i=0;i<n;i++)
  {
    scanf("%d\n",&p[i]);
  }
  adj = vector<vector<int> > (n+3);
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      scanf("%1d",&u);
      if(u) adj[i].push_back(j);
    }
  }
  for(int i=0;i<n;i++)
  {
    if(vis[i]) continue;
    val.clear();
    pos.clear();
    dfs(i);
    sort(val.begin(),val.end());
    sort(pos.begin(),pos.end());
    for(int i=0;i<val.size();i++)
    {
      a[pos[i]] = val[i];
    }
  }
  for(int i=0;i<n;i++)
  {
    printf("%d%c",a[i],(i==n-1)?'\n':' ' );
  }
  return 0;
}
