#include<bits/stdc++.h>
using namespace std;
bool visited[200005]={false};
bool incoming[200005] = {false};
bool outgoing[200005];

int main()
{
  int n,m;
  cin>>n>>m;
  vector<int> nodes[n+1];
  memset(outgoing,true,sizeof(outgoing));
  for(int i=1;i<=m;i++)
  {
    int x,y;
    cin>>x>>y;
    nodes[x].push_back(y);
  }
  stack<int>s;
  for(int i=1;i<=n;i++)
  {
    if(!visited[i])
    {
      s.push(i);
      visited[i] = true;
      while(!s.empty())
      {
        int v = s.top();
        s.pop();
        if(nodes[v].size()==0)
        {
          incoming[v] = true;
        }
        for(int i=0;i<nodes[v].size();i++)
        {
          if(!visited[nodes[v][i]])
          {
            visited[nodes[v][i]] = true;
            s.push(nodes[v][i]);
          }
          outgoing[nodes[v][i]] = false;
        }
      }
    }
  }
  int out=0;
  int in=0;
  for(int i = 1;i<=n;i++)
  {
    if(outgoing[i])
    {
      //cout<<"out "<<i<<endl;
      out++;
    }
    if(incoming[i])
    {

        //cout<<"in "<<i<<endl;
      in++;
    }
  }
  cout<<max(out,in)<<endl;
}
