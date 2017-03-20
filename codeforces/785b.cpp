#include<bits/stdc++.h>
using namespace std;
long long int a[200005];
long long int b[200005];
long long int c[200005];
long long int d[200005];
int main()
{
  ios::sync_with_stdio(false);
  int n;
  cin>>n;
  for(int i=0;i<n;i++) cin>>a[i],cin>>b[i];
  int m;
  cin>>m;
  for(int i=0;i<m;i++) cin>>c[i],cin>>d[i];
  long long ans =0;
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
    {
      if(a[i]>d[j])
      {
        ans = max(ans,a[i]-d[j]);
      }
      else if(b[i]<c[j])
      {
        ans = max(ans,c[j]-b[i]);
      }
    }
  }
  cout<<ans<<endl;

}
