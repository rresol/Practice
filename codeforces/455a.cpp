#include<bits/stdc++.h>
using namespace std;
long long int a[100005];
long long int max_n[100005];
int main()
{
  int n;
  cin>>n;
  for(int i=1;i<=n;i++)
  {
      int b;
      cin>>b;
      a[b]+=b;
  }
  long long maxn[n+1];
  long long ans;
  max_n[1] = a[1];
  max_n[2] = max(a[1],a[2]);
  ans = max(max_n[1],max_n[2]);

  for(int j=3;j<100005;j++)
  {
    max_n[j] = max(max_n[j-1],max_n[j-2]+a[j]);
    ans = max(ans,max_n[j]);
    //cout<<j<<endl;
    // cout<<max_n[j]<<endl;
    // cout<<a[j]<<endl;
  }
  cout<<ans<<endl;
  return 0;
}
