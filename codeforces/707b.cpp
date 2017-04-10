#include<bits/stdc++.h>
using namespace std;
int d[100005];
int main()
{
  ios::sync_with_stdio(false);
  int ans = INT_MAX;
  int n,m,k;
  cin>>n>>m>>k;
  int a[m],b[m],c[m];
  for(int i=0;i<m;i++)
  {
    cin>>a[i]>>b[i]>>c[i];
  }
  for(int i=0;i<k;i++)
  {
    int x ;
    cin>>x;
    d[x] = 1;
  }
  for(int i=0;i<m;i++)
  {
    if(d[a[i]]+d[b[i]]==1)
    {
      if(ans>c[i])
      {
        ans = c[i];
      }
    }
  }
  if(ans==INT_MAX)
    cout<<-1<<endl;
  else
    cout<<ans<<endl;
}
