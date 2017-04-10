#include<bits/stdc++.h>
using namespace std;
int vis[200005];
int color[200005];
int n;
vector<vector<int> >graph(200005);
int k = INT_MIN;

void dfs(int node, int parent)
{
  if(vis[node])
  {
    return;
  }
  vis[node] = 1;
  int j=1;
  for(int i=0;i<graph[node].size();i++)
  {
    if(!vis[graph[node][i]]){
    while(j==color[node]||j==color[parent])
      j++;
    color[graph[node][i]] = j;
    j++;
    dfs(graph[node][i],node);
    k= max(k,j);}
  }
}

int main()
{
  ios::sync_with_stdio(false);
  cin>>n;
  for(int i=0;i<n-1;i++)
  {
    int x,y;
    cin>>x>>y;
    graph[x].push_back(y);
    graph[y].push_back(x);
  }
  color[1] = 1;
  color[0] = -1;

  for(int i=1;i<=n;i++)
  {
    if(!vis[i])
      dfs(i,0);
  }
  cout<<k-1<<endl;
  for(int i=1;i<200005;i++)
  {
    if(color[i])
    {
      cout<<color[i]<<" ";
    }
  }
  return 0;
}
