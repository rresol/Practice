#include<bits/stdc++.h>
using namespace std;
vector<int> graph[105];
bool visited[105];

int solve(int count[], int src)
{
  int tot =0;
  int i;
  visited[src] = true;
  for(i=0;i<graph[src].size();i++)
  {
    if(!visited[graph[src][i]]){
    tot+=solve(count,graph[src][i]);
    //cout<<(i)<<endl;
  }
  }
  count[src] = 1+tot;
  cout<<src<<"  "<<count[src]<<endl;
  return 1+tot;
}

int main()

{
  int n,m;
  cin>>n>>m;
  ///vector< vector<int> > graph(n+1);
  while(m--)
  {
    int a,b;
    cin>>a>>b;
    graph[a].push_back(b);
    graph[b].push_back(a);
  }
  bool visited[103]= {false};
  int count[1001] = {0};
  solve(count,1);
  int ans=0;
  for(int i=1;i<=n;i++)
  {
    if(count[i]%2==0 && count[i]!=0)
    {
      ans++;
    }
  }
  cout<<ans-1<<endl;
}
