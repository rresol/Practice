#include<iostream>
#include<vector>
#include<queue>
#include<cstdlib>
#include<cstring>

using namespace std;

int main()
{
  long long int n,m,q;
  cin>>n>>m>>q;
  vector<pair<long long int,long long  int> > a[n+1];
  for(int i=1;i<=m;i++)
  {
    long long int x,y;
    cin>>x>>y;
    a[x].push_back(make_pair(y,i));

    a[y].push_back(make_pair(x,i));
  }
  long long int level[100005];
  memset(level,-1,sizeof(level));
  long long moment[200005];
  for(int i=1;i<=q;i++)
  {
    int t,x;
    cin>>t>>x;
    moment[x] = t;
  }
  queue< int > q;
  q.push(1);
  level[1] =0;
  while(!q.empty())
  {
    int val  = q.front();
    q.pop();
    for(int i=0;i<a[val].size();i++)
    {
      if(level[a[val][i].first]==-1 && moment[a[val][i].second]!=level[val])
      {
        level[a[val][i].first] = level[val] +1;
        q.push(a[val][i].first);
      }
    }
    if(a[val][i].first==n)
    {
      cout<<level[n]<<endl;
      break;
    }
  }
}
