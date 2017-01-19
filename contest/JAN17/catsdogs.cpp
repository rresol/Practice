#include<iostream>
#include <list>
#include<climits>
#include<algorithm>
using namespace std;
class Graph
{
    int V;    // No. of vertices
    list<int> *adj;    // Pointer to an array containing adjacency lists
public:
    Graph(int V);  // Constructor
    void addEdge(int v, int w); // function to add an edge to graph
    bool checking(int s, int t);  // prints BFS traversal from a given source s
};


Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}

void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w); // Add w to vÃ¢ï¿½ï¿½s list.
    adj[w].push_back(v);
}

bool Graph::checking(int s, int t)
{
  if(find(adj[s].begin(),adj[s].end(),t)!=adj[s].end())
  {
    return true;
  }
  return false;
}
int main()
{
    // Create a graph given in the above diagram
    int t;
    cin>>t;
    while(t--)
    {
      int n;
      cin>>n;
      Graph g(n+1);

      long long int p[n];
      for(int i=0;i<n;i++)
      {
        cin>>p[i];
      }
      for(int i=0;i<n-1;i++)
        {int u,v;
        cin>>u>>v;
        g.addEdge(u, v);

}      int victim = 1;
      long long int ans[50005]={0};
      long index ;
      while(victim<=n)
      {
        long long pop = INT_MIN;

        for(int i=1;i<=n;i++)
        {
          if(i!=victim)
          {if(!g.checking(i,victim))
          {
            if(p[i-1]>pop)
            {
              pop = p[i-1];
              index = i;
            }
          }}
        }
        ans[victim-1] = index;
        victim++;
      }
      for(int i=0;i<n;i++)
      {
        cout<<ans[i]<<" ";
      }
    }


    return 0;
}
