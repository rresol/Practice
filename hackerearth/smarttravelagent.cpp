#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int> >nodes[10005];
bool visited[100005];
vector<int>path;
int dist[]

int dfs(int s, int d)
{


  for(int i=0;i<nodes[v].size();i++)
  {
    if(!visited[nodes[v][i]])
    {
      int capacity = min(dist[u],edge[u][v]);
      if(nodes[v][i]==d)
      {
        dist[v] = dist[nodes[v][i]];
      }
    }
  }
}


int main()
{
  int n,r;
  cin>>n>>r;

  for(int i=0;i<r;i++)
  {
    int x,y,w;
    cin>>x>>y>>w;
    nodes[x].push_back(make_pair(y,w));
    nodes[y].push_back(make_pair(x,w));
  }

}
