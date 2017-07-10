#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,m,edge_count,node_count;
  cin>>n>>m;
  vector<int> graph[n+1];
  bool visited[n+1];
  memset(visited, false, sizeof(visited));
  while(m--)
  {
    int u,v;
    cin>>u>>v;
    graph[u].push_back(v);
    graph[v].push_back(u);
  }
  stack<int>s;
  float ratio=0.0;
  int ans_edge = 0;
  int ans_node = 0;
  bool flag =false;
  for(int i=1;i<=n;i++)
  {
    if(!visited[i])
    {
      s.push(i);
      visited[i] = true;
      edge_count = 0;
      node_count = 0;
      while(!s.empty())
      {
        int val = s.top();
        s.pop();
        node_count++;

        for(int j=0;j<graph[i].size(); j++)
        {
          if(!visited[graph[i][j]])
          {
            edge_count++;
            s.push(graph[i][j]);
            visited[graph[i][j]] = true;
          }
        }
      }
      if(ratio<((float(edge_count))/node_count))
      {
        ratio = edge_count/node_count;
        ans_edge = edge_count;
        ans_node = node_count;
        if(ratio>1)
        {
          flag = true;
        }
      }
    }
  }
  if(flag)
  {
    cout<<">1"<<endl;
    return 0;
  }
  cout<<ans_edge<<"/"<<ans_node<<endl;
  return 0;

}
