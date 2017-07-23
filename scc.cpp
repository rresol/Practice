#include<bits/stdc++.h>
using namespace std;
vector<int>nodes[100005];
vector<int>reverse_nodes[100005];
bool visited[100005];
stack<int>s;
void dfs(int src)
{
  visited[src] = true;
  for(int i=0;i<nodes[src].size();i++)
  {
    if(!visited[nodes[src][i]])
      dfs(nodes[src][i]);
  }
  s.push(src);
  return;
}
void dfs_rev(int src)
{
  visited[src] = true;
  cout<<src<<"  ";
  for(int i=0;i<nodes[src].size();i++)
  {
    if(!visited[nodes[src][i]])
      dfs_rev(nodes[src][i]);
  }

  //s.push(src);
  return;
}
void reverse(int n)
{

  for(int i=0;i<n;i++)
  {
    for(int j=0;j<nodes[i].size();j++)
      reverse_nodes[nodes[i][j]].push_back(i);
  }
}
int main()
{
  int n,m;
  cin>>n>>m;
  for(int i=0;i<n;i++)
    visited[i] = false;

  for(int i=0;i<m;i++)
  {
    int x,y;
    cin>>x>>y;
    nodes[x].push_back(y);
    //nodes[y].push_back(x);
  }
  //stack<int>s;
  dfs(0);
  //cout<<1<<endl;
  reverse(n);
  //cout<<2<<endl;
  for(int i=0;i<n;i++)
    visited[i] = false;
  while(!s.empty())
  {
    int v = s.top();
    s.pop();
    cout<<v<<endl;
    if(visited[v]==false)
    {
      dfs_rev(v);
      cout<<endl;
    }

  }
}
