#include<bits/stdc++.h>
using namespace std;
int parent[105][105];
int graph[105][105][105];
int main()
{
  for(int i=0;i<105;i++)
  {
    for(int j=0;j<105;j++)
      parent[i][j] = i;
  }
  int n,m;
  cin>>n>>m;
  while(m--)
  {
    int a,b,c;
    cin>>a>>b>>c;
    int k = min(a,b);
    if(parent[a][c]==a && parent[b][c]==b)
    {
      parent[a][c] = parent[k][c];
      parent[b][c] = parent[k][c];
      graph[a][b][c] =1;
    }
    else if (parent[a][c]!=a && parent[b][c]!=b)
    {
      parent[a][c] = (parent[k][c],min(parent[b][c],parent[a][c]));
      parent[b][c] = (parent[k][c],min(parent[b][c],parent[a][c]));
      graph[parent[a][c]][parent[b][c]][c] = 1;
    }
    else if(parent[a][c]!=a)
    {
      parent[b][c] = parent[a][c];
      graph[parent[a][c]][parent[b][c]][c] = 1;
    }
    else if(parent[b][c]!=b)
    {
      parent[a][c] = parent[b][c];
      graph[parent[a][c]][parent[b][c]][c] = 1;
    }
  }
  int q;
  cin>>q;
  while(q--)
  {
    int a,b;
    cin>>a>>b;
    int cou=0;
    for(int i=1;i<101;i++)
    {
      if(graph[parent[a][i]][parent[b][i]][i])
        cou++;
    }
    cout<<cou<<endl;
  }
}
