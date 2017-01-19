#include<iostream>
#define  ll long long int
using namespace std;

ll value(ll *x)
{
  ll ret =0;
  for(int i=0;i<32;i++)
    ret+= (1<<i)*(x[i]>0);
  return ret;
}
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    ll ans = 0;
    ll n,k;
    cin>>n>>k;
    ll a[n];
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
    }
    ll curr[32]={0};
    ll end =0;
    for(int i=0;i<n;i++)
    {
      while(value(curr)<k&&end<n)
      {
        for(int j=0;j<32;j++)
        {
          curr[j]+= ((1<<j)&a[end]);
        }
        end++;
      }
      if(value(curr)>=k)
        ans += (n-end+1);
      for(int j=0;j<32;j++)
      {
        curr[j]-= ((1<<j)&a[i]);
      }
    }
    cout<<ans<<endl;
  }
}
