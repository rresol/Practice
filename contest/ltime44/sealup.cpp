#include<bits/stdc++.h>
using namespace std;
long long dp[2*1000005];
long long int price[11];
long long int length[11];
void unboundedKnapsack( long long m)
{
long long int ans = 0;
    dp[0] = 0;
    for (long long int i=0; i<m; i++){
      for (long long int j=1; j<(2*1000005); j++){
         dp[j] = min(dp[j],dp[(j-length[i])>0?(j-length[i]):0]+price[i]);
        }
}
}
int main()
{
  long long int t;
  cin>>t;
  while(t--)
  {
      int n;
      int m;
        cin>>n;
        memset(dp,-1,sizeof(dp));
        long long arr[n];
        long long x[n],y[n];
        cin>>x[0]>>y[0];
        for(int i=1;i<n;i++)
        {
            cin>>x[i]>>y[i];
            arr[i-1]=ceil(sqrt(pow(x[i]-x[i-1],2)+pow(y[i]-y[i-1],2)));
        }
        arr[n-1]=ceil(sqrt(pow(x[0]-x[n-1],2)+pow(y[0]-y[n-1],2)));
        cin>>m;
        for(int i=0;i<m;i++)
        {
            long long a,b;
            cin>>a>>b;
            length[i]=a;
            price[i]=b;
        }
    long long ans =0;
    unboundedKnapsack(m);
    for(long long int i=0;i<n;i++)
    {
      ans+= dp[arr[i]];
    }
    cout<<ans<<endl;

  }
}
