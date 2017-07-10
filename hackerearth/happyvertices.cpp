#include<bits/stdc++.h>
using namespace std;
bool visited[200005]={false};
bool incoming[200005] = {false};
int children[200005];
int parent[200005];
bool masterparent[200005];
int main()
{
  int n,m;
  cin>>n>>m;
  vector<int> nodes[n+1];
  memset(masterparent,false,sizeof(masterparent));
  for(int i=1;i<=m;i++)
  {
    int x,y;
    cin>>x>>y;
    nodes[x].push_back(y);
    nodes[y].push_back(x);
  }
  stack<int>s;
  for(int i=1;i<=n;i++)
  {
    if(!visited[i])
    {
      masterparent[i] = true;
      s.push(i);
      visited[i] = true;
      while(!s.empty())
      {
        int v = s.top();
        s.pop();

        for(int i=0;i<nodes[v].size();i++)
        {
          if(!visited[nodes[v][i]])
          {
            visited[nodes[v][i]] = true;
            s.push(nodes[v][i]);
            children[nodes[v][i]]++;
            parent[nodes[v][i]]=v;
          }

        }
      }
    }
  }
  int ans=0;
  for(int i=0;i<v;i++)
  {
    if(!masterparent[i] &&(children[i]<children[parent[i]]))
    {
      ans++;
    }
  }
  cout<<ans<<endl;

}
