#include<bits/stdc++.h>
using namespace std;

int n,m;
vector<pair<int,int> >nodes[100005];
bool visited[100005]={false};

bool kpathUtil(int src, int k, vector<bool> &path)
{
  if(k<=0)
  {
    //cout<<"YES"<<endl;
    return true;
  }
  for(int i=0;i<nodes[src].size();i++)
  {
    int v  = nodes[src][i].first;
    int weight = nodes[src][i].second;
    if(path[v])
      continue;
    if(weight>=k)
      {
        //cout<<"YES"<<endl;
        return true;
      }
      path[v] = true;
      if(kpathUtil(v,k-weight,path))
      {
        return true;
      }
      path[v] = false;
  }
  return false;
}

bool kpath(int src, int k)
{
  vector<bool> path(n,false);
  path[src] = 1;
  return kpathUtil(src,k,path);

}

int main()
{
  cin>>n>>m;
  for(int i=0;i<m;i++)
  {
    int x,y,w;
    cin>>x>>y>>w;
    nodes[x].push_back(make_pair(y,w));
    nodes[y].push_back(make_pair(x,w));
  }
  int src,k;
  cin>>src>>k;
  if(kpath(src,k))
  {
    cout<<"YES"<<endl;
  }
  else
  {
    cout<<"NO"<<endl;
  }
  return 0;
}
