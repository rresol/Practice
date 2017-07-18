#include<bits/stdc++.h>
using namespace std;

const int MAX = 100005;
typedef pair <long long , int>PII;
bool marked[MAX];
vector< PII >nodes[MAX];

long long prim(int x)
{
  priority_queue<PII, vector<PII>, greater<PII> >Q;
  int y;
  long long minimumcost = 0;
  PII p;
  Q.push(make_pair(0,x));
  while(!Q.empty())
  {
    p = Q.top();
    Q.pop();
    x = p.second;

    if(marked[x]==true)
      continue;
    cout<<x<<endl;
    minimumcost += p.first;
    marked[x] = true;
    for(int i=0;i<nodes[x].size();i++)
    {
      y = nodes[x][i].second;
      if(marked[y]==false)
      {
        Q.push(nodes[x][i]);
      }
    }
  }
  return minimumcost;
}

int main()
{
  int n,m;
  cin>>n>>m;
  for(int i=0;i<m;i++)
  {
    int x,y,weight;
    cin>>x>>y>>weight;
    nodes[x].push_back(make_pair(weight, y));
    nodes[y].push_back(make_pair(weight, x));
  }
  int minimumcost = prim(1);
  cout<<minimumcost<<endl;
  return 0;
}
