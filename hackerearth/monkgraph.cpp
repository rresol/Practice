#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,m;
  cin>>n>>m;
  vector<int>nodes[n+1];
  for(int i=0;i<m;i++)
  {
    int u,v;
    cin>>u>>v;
    nodes[u].push_back(v);
    nodes[v].push_back(u);
  }
  int A,B;
  cin>>A>>B;
  queue<int>q;
  q.push(A);
  bool visited[n+1];
  bool sptSet[n+1];
  for(int i=0;i<=n;i++)
    {
      visited[i] = false;
      sptSet[i]=false;}
  visited[A]=true;
  sptSet[A] = true;
  while(!q.empty())
  {
    int v = q.front();
    q.pop();
    sptSet[v]=true;
    if(v==B)
      break;
    for(int i=0;i<nodes[v].size();i++)
    {
      if(!visited[nodes[v][i]])
      {
        q.push(nodes[v][i]);
        visited[nodes[v][i]]=true;
      }
    }
  }
  for(int i=1;i<=n;i++)
  {
    if(sptSet[i] && i!=A && i!=B){
      cout<<i<<endl;
      return 0;
    }
  }
  cout<<-1<<endl;
  return 0;
}
