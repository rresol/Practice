#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,m;
  cin>>n>>m;
  vector<int>nodes[n];
  for(int i=0;i<m;i++){
    int x,y;
    cin>>x>>y;
    nodes[x].push_back(y);
  }
  stack<int>s;

  bool visited[n];
  memset(visited,false,n);
  for(int i=0;i<n;i++)
  {
    if(!visited[i])

  {
    s.push(i);
    visited[i]=true;
  while(!s.empty())
  {
    int v = s.top();
    s.pop();
    for(int i=0;i<nodes[v].size();i++)
    {
      if(!visited[nodes[v][i]])
      {
        visited[nodes[v][i]]=true;
        cout<<nodes[v][i]<<" ";
        s.push(nodes[v][i]);
      }
    }
  }
}
}
return 0;
}
