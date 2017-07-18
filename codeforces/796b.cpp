#include<bits/stdc++.h>
using namespace std;
int holes[2000005];
int main()
{
  int n,m,k;
  scanf("%d",&n);
  scanf("%d",&m);
  scanf("%d",&k );
 //ios::sync_with_stdio(false);
  for(int i=1;i<=m;i++)
  {
    int b;
    cin>>b;
    holes[b]=1;
  }
  int pos = 1;
  bool flag = false;
  int ans =1;
  if(holes[1])
  {
    ans = 1;
    flag  = true;
  }
  for(int i=1;i<=k;i++)
  {
    int u,v;
    scanf("%d", &u);
    scanf("%d",&v);
    if((pos==u) || (pos==v))
     { //if((pos!=u) && holes[u] && (!flag))
    // {
    //   ans = u;
    //   flag = true;
    // }
    // else if((pos!=v) && holes[v] && (!flag))
    // {
    //   ans = v;
    //   flag = true;
    // }
    if((!flag)){
      if(pos!=u)
      {
        ans = u;
        pos = u;
        if(holes[u])
        {
          flag = true;
        }
      }
      else{
        ans = v;
        pos = v;
        if(holes[v])
        {
          flag = true;
        }
      }
    }}

  }

  printf("%d\n",ans );
  return 0;
}
