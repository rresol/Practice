#include<bits/stdc++.h>
using namespace std;

int nodes[1005];
int main()
{
  int n,m;
  cin>>n>>m;
  for(int i=1;i<=n;i++)
  {
    cin>>nodes[i];
  }
  int ans =0;
  for(int i=1;i<=m;i++)
  {
    int x,y;
    cin>>x>>y;
    ans+= min(nodes[x],nodes[y]);
  }
  cout<<ans<<endl;
}
