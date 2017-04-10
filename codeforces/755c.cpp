#include<bits/stdc++.h>
using namespace std;
bool visited[10005];

int trace(int parent[], int n, int i  )
{
  if(visited[i])
    return parent[i];
  if(parent[i]!=i) {
    visited[i] = true;
    parent[i] = trace(parent,n,parent[i]);
  }
  return parent[i];
}

int main()
{
  int n;
  cin>>n;
  int parent[n+1];
  int cou[n+1];
  memset(cou, 0 ,sizeof(cou));
  for(int i=0;i<=n;i++) parent[i] = i;
  int p[n+1];
  for(int i=1;i<=n;i++)
  {
    cin>>p[i];
    parent[i] = parent[p[i]];
  }
  for(int i=1;i<=n;i++)
  {
    trace(parent,n,i);
  }
  for(int i=1;i<=n;i++)
  {
    cou[parent[i]] = 1;
  }
  int ans =0;
  for(int i=0;i<=n;i++)
  {
    if(cou[i])
      ans++;
  }
  cout<<ans<<endl;
}
