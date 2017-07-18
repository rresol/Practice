#include<bits/stdc++.h>
using namespace std;
#define n 9
int min_dist(int dist[n], bool sptset[n])
{
  int index;
  int val = INT_MAX;
  for(int i=0;i<n;i++)
  {
    //cout<<dist[i]<<" ";
    if(sptset[i]==false && dist[i]<val)
    {
      val=dist[i];
      index = i;

    }
  }
  //cout<<val<<endl;
  //cout<<index<<endl;
  return index;
}
int dijkstra(int graph[n][n], int src)
{
  int dist[n];
  bool sptset[n];
  for(int i=0;i<n;i++)
  {
    dist[i] = INT_MAX;
    sptset[i] = false;
  }

  //memset(sptset,false,sizeof(sptset));
  dist[0] = 0;
  for(int count=0; count<n-1;count++)
  {
    int u = min_dist(dist,sptset);
    //cout<<u<<endl;
    sptset[u] = true;
    for(int i=0;i<n;i++)
    {
      if(!sptset[i] &&graph[u][i] && dist[u]!=INT_MAX && dist[u]+graph[u][i]<dist[i])
      {
        dist[i] = dist[u] + graph[u][i];
      }
    }
  }
  for(int i=0;i<n;i++)
  {
    cout<<dist[i]<<endl;
  }
  return 0;
}


int main()
{
  int graph[n][n] = {{0, 4, 0, 0, 0, 0, 0, 8, 0},
                      {4, 0, 8, 0, 0, 0, 0, 11, 0},
                      {0, 8, 0, 7, 0, 4, 0, 0, 2},
                      {0, 0, 7, 0, 9, 14, 0, 0, 0},
                      {0, 0, 0, 9, 0, 10, 0, 0, 0},
                      {0, 0, 4, 14, 10, 0, 2, 0, 0},
                      {0, 0, 0, 0, 0, 2, 0, 1, 6},
                      {8, 11, 0, 0, 0, 0, 1, 0, 7},
                      {0, 0, 2, 0, 0, 0, 6, 7, 0}
                     };

    dijkstra(graph, 0);

    return 0;
}
