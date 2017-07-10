#include<bits/stdc++.h>
using namespace std;
bool visited[200005]={false};
int main()
{
  int n,m;
  cin>>n>>m;
  vector<int> nodes[n+1];
  for(int i=1;i<=m;i++)
  {
    int u,v;
    cin>>u>>v;
    if(u!=v){
    nodes[u].push_back(v);
    nodes[v].push_back(u);}
    else
    {
      nodes[u].push_back(v);
    }
  }
  stack<int>s;
  int  max_edges= -1;
  for(int i=1;i<=n;i++)
  {
    if(!visited[i])
    {
      s.push(i);
      visited[i] = true;
      int edges = 0;
      while(!s.empty())
      {
        int v = s.top();
        //cout<<i<<" "<<v<<endl;
        s.pop();
        for(int j=0;j<nodes[v].size();j++)
        {
          //cout<<v<<endl;
          edges++;
          if(nodes[v][j]==v)
          {
            //cout<<"hi"<<"  "<<nodes[v][j]<<endl;
            edges++;
          }
          if(!visited[nodes[v][j]])
          {
            visited[nodes[v][j]] = true;
            s.push(nodes[v][j]);
          }
          //cout<<edges<<endl;
        }
        //cout<<i<<"  "<<edges<<endl;
      }
      max_edges = max(max_edges,edges);
    }
  }
  cout<<max_edges/2<<endl;
  return 0;
}
