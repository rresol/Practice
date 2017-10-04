#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  vector<long long int>a(n);
  for(int i=0;i<n;i++)cin>>a[i];

  vector<long long int>ans(n,0);
  ans[0] =a[0];
  ans[1] = max(a[0]+a[1],a[0]*a[1]);
  for(int i=2;i<n;i++)
  {
    ans[i] = max(ans[i-2]+(a[i-1]*a[i]),ans[i-1]+a[i]);
  }
  cout<<ans[n-1]<<endl;
  return 0;
}
