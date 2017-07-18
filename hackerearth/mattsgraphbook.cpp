#include<bits/stdc++.h>
using namespace std;
bool visited[200005];
int parent[200005];
bool ap[200005];
vector<int>nodes[200005];
int low[200005];
int disc[200005];
int n,k;


void dfsUtil(int u)
{
  static int time = 0;
  visited[u] = true;
  low[u]=disc[u]= ++time;
  int children =0;
  for(int i=0;i<nodes[u].size();i++)
  {
    if(!visited[(nodes[u][i])])
    {
      children++;
      parent[nodes[u][i]] = u;
      dfsUtil(nodes[u][i]);
      low[u] = min(low[u],low[nodes[u][i]]);

      if(parent[u]==INT_MAX && children>1)
      {
        ap[u] = true;
      }
    //cout<<u<<" "<<parent[u]<<endl;
     if(parent[u]!=INT_MAX && low[nodes[u][i]]>=disc[u])
     {
       ap[u] = true;
     }

    }
    else if(parent[u]!=nodes[u][i])
    {
      low[u] = min(low[u],disc[nodes[u][i]]);
    }
  }
}

void dfs()
{
  for(int i=0;i<n;i++)
  {
    parent[i]= INT_MAX;
  }
  for(int i=0;i<n;i++)
  {
    if(!visited[i])
    {
      //cout<<"step1"<<endl;
      dfsUtil(i);
    }
  }
}
int main()
{

  cin>>n>>k;

  while(k--)
  {
    int a,b;
    cin>>a>>b;
    nodes[a].push_back(b);
    nodes[b].push_back(a);
  }
  dfs();
  int x;
  cin>>x;
  if(ap[x])
  {c
    cout<<"Not Connected"<<endl;
  }
  else
  {
    cout<<"Connected"<<endl;
  }
  // for(int i=0;i<n;i++)
  // {
  //   if(ap[i])
  //   {
  //     cout<<i<<endl;
  //   }
  // }
}
