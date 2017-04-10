#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,m,k;
  cin>>n>>m>>k;
  int c[k+1];
  int cou[k+1];
  memset(cou,0,sizeof(cou));
  for(int i=1;i<=k;i++)
  {
    cin>>c[i];
  }
  int ans =0;
  for(int i=1;i<=m;i++)
  {
    int a,b;
    cin>>a>>b;
    if(c[a]!=c[b])
    {
      ans++;
    }
  }
  cout<<ans<<endl;


}
