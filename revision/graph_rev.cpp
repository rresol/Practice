#include<bits/stdc++.h>
using namespace std;
bool recstack[100005]={false};
bool visited[100005] = {false};
vector<int>nodes[100005];

bool iscycle(int n)
{
  visited[n] = true;
  recstack[n] = true;
  for(int i=0;i<nodes[n].size();i++)
  {
    if(!visited[nodes[n][i]])
       if(iscycle(nodes[n][i]))
          return true;
    else if(recstack[nodes[n][i]])
      return true;
  }
  recstack[n] = false;
  return false;
}
int k;

bool kpath(int n, int k, int path[])
{
   if(k<=0)
      return true;
    for(int i=0;i<nodes[n].size();i++)
    {
      int v = nodes[n][i].second;
      int w = nodes[n][i].first;
      if(path[v])
        continue;
      if(w>=k) return true;
      path[v] = true;
      kpath(v,k-w,path);
      path[v]=false;
    }
    return false;
}



int main()
{
  int n;
  cin>>n;
  //vector<int>nodes[n+1];
  for(int i=0;i<n;i++)
  {
    int x,y;
    cin>>x>>y;
    nodes[x].push_back(y);
  }
  if(iscycle(1))
  {
    cout<<"Yes"<<endl;
  }
  else
  {
    cout<<"no"<<endl;
  }

}
