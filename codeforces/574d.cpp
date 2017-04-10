#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int h[n];
  for(int i=0;i<n;i++)
  {
    cin>>h[i];
  }
  int l[n],r[n],ans=0;
  l[0] = 1;
  r[n-1] = 1;
  for(int i=1;i<n;i++)
  {
    l[i] = min(l[i-1]+1,h[i]);
  }
  for(int i=n-2;i>=0;i--)
  {
    r[i] = min(r[i+1]+1,h[i]);
  }
  for(int i=0;i<n;i++)
  {
    ans = max(ans,min(l[i],r[i]));
  }
  cout<<ans<<endl;
  return 0;
}
