#include<bits/stdc++.h>
using namespace std;
#define MAXN  100004
#define NIL -1
int n,m;
vector<int>nodes[MAXN];
bool visited[MAXN];
int parent[MAXN];
int disc[MAXN];
int low[MAXN];

bool isBCUtil(int u)
{
  static int time =0;
  int children =0;
  visited[u] = true;
  disc[u] = low[u] = ++time;
  for(int i=0;i<nodes[i].size();i++)
  {
    int v = nodes[u][i];
    if(!visited[v])
    {
      children++;
      parent[v] = u;
      if(isBCUtil(v))
      {
        return true;
      }
      low[u] = min(low[u],low[v]);
      if(parent[u]==NIL && children>1)
        return true;
      if(parent[u]!=NIL && low[v]>=disc[u])
        return true;

    }
    else if(v!=parent[u]){
        low[u] = min(low[u],disc[v]);
    }
  }
  return false;
}

bool isBc()
{
  for(int i=0;i<n;i++)
  {
    parent[i]=NIL;
    visited[i]=false;
  }
  if(isBCUtil(0))
    return false;
  for(int i=0;i<n;i++)
  {
    if(!visited[i])
    {
      return false;
    }
  }
  return true;
}


int main()
{
  //int n,m;
  cin>>n>>m;
  for(int i=0;i<m;i++)
  {
    int x,y;
    cin>>x>>y;
    nodes[x].push_back(y);
    nodes[y].push_back(x);
  }
  if(isBc())
  {
    cout<<"YES"<<endl;
  }
  else
  {
    cout<<"NO"<<endl;
  }
}
