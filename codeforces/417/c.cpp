#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long int n,s;
  cin>>n>>s;
  vector<long long int>a(n);
  for(int i=0;i<n;i++)cin>>a[i];
  vector<long long int>sum(n);
  vector<long long int>indices(n);
  sum[0] = a[0];
  indices[0] = 1;
  for(int i=1;i<n;i++)
  {
    sum[i] = sum[i-1]+a[i];
    indices[i] = indices[i-1]+(i+1);
  }
  long long int max_items = 0;
  long long int min_cost = LONG_LONG_MAX;
  for(long long int k=1;k<=n;k++){
    long long int minimum_cost   = LONG_LONG_MAX;
    long long int v = sum[k-1];
    v += (k*indices[k-1]);
    if(v<=s)
    {
      minimum_cost = v;
    }
    //cout<<k<<" "<<v<<endl;
    for(int i=1;i<n-k;i++)
    {
      v = sum[i+k]-sum[i-1];
      v += (k*(indices[i+k]-indices[i-1]));
      // cout<<k<<" ";
      // cout<<v<<endl;
      if((v<=s))
      {
        minimum_cost = min(v,minimum_cost);
      }
    }

    if(minimum_cost!=LONG_LONG_MAX)
    {
      if(max_items<=k)
      {
        max_items =  max(max_items, k);
        min_cost =  minimum_cost;
      }
    }
  }
  cout<<max_items<<endl;
  cout<<(min_cost!=LONG_LONG_MAX?min_cost:0)<<endl;

}
