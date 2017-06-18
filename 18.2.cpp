#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
int main()
{
  int n,m;
  cin>>n>>m;
  vector<int> a[n];
  while(m--)
  {
    int x,y;
    cin>>x>>y;
    a[x].push_back(y);
    a[y].push_back(x);
  }
  int level[n];
  memset(level,-1,sizeof(level));
  queue<int> q;
  q.push(0);
  level[0] = 0;
  while(!q.empty())
  {
    int val = q.front();
    q.pop();
    for(int i=0;i<a[val].size();i++)
    {
      if(level[a[val][i]]==-1)
      {
        q.push(a[val][i]);
        level[a[val][i]] = level[val]+1;
      }
    }
  }

}
