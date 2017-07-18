#include<bits/stdc++.h>
using namespace std;
typedef pair<int, int> PII;
vector< PII >nodes[10005];
int main()
{
  int n,m;
  cin>>n>>m;
  for(int i=0;i<m;i++)
  {
    int x,y,w;
    cin>>x>>y>>w;
    nodes[x].push_back(make_pair(y,w));
    nodes[y].push_back(make_pair(x,w));
  }
  int dist[n];
  for(int i=0;i<n;i++)
  {
    dist[i] = INT_MAX;
  }
  priority_queue<PII, vector<PII>, greater<PII> > pq;
  pq.push(make_pair(0,0));
  dist[0] =0;
  while(!pq.empty())
  {
    int u = pq.top().second;

    pq.pop();
    for(int i=0;i<nodes[u].size();i++)
    {
      int v = nodes[u][i].first;
      int weight = nodes[u][i].second;
      if(dist[v]>dist[u]+weight)
      {
        dist[v] = dist[u] + weight;
        pq.push(make_pair(dist[v],v));
      }
    }
  }
  for(int i=0;i<n;i++)
  {
    cout<<i<<" "<<dist[i]<<endl;
  }


}
