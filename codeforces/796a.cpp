#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,m,k;
  cin>>n>>m>>k;
  int a[n+1];
  for(int i=1;i<=n;i++)
  {
    cin>>a[i];
  }
  int dist = INT_MAX;
  for(int i=1;i<=n;i++)
  {
    if(a[i] && a[i]<=k)
    {
      int b = fabs(i-m);
      dist = min(dist,b);
    }
  }
  cout<<dist*10<<endl;
  return 0;
}
