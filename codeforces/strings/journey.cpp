#include<bits/stdc++.h>
using namespace std;
vector<int>nodes[100005];
int height[100005];
double ans=0;
double prob[100005];
void dfs(int u, int p)
{
  height[u] = height[p] +1;
  int s = nodes[u].size();
  if(s>1){
    for(int i=0;i<s;i++)
    {
      if(nodes[u][i]!=p)
        {

          cout<<prob[u]<<endl;
          prob[nodes[u][i]] = prob[u]/(s-1);
          dfs(nodes[u][i],u);
          //cout<<nodes[u][i]<<" "<<prob[nodes[u][i]]<<endl;
        }
    }

  }
  else
  {
    ans+= (prob[u]*height[u]);
  }
}

int main()
{
  int n;
  cin>>n;
  for(int i=0;i<n-1;i++){
    int x,y;
    cin>>x>>y;
    nodes[x].push_back(y);
    nodes[y].push_back(x);
  }
  height[0] = -1;
  nodes[1].push_back(0);
  prob[1] = 1;
  dfs(1,0);
  cout<<fixed<<setprecision(10)<<ans<<endl;
}
