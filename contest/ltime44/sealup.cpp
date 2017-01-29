#include<bits/stdc++.h>
using namespace std;
long long dp[200005];
void unboundedKnapsack(long long price[],long long  int length[], long long n)
{
    long long int ans = 0;

    // Fill dp[] using above recursive formula
    for (long long int i=0; i<=200005; i++){
      for (long long int j=0; j<n; j++){
         if (length[j] <= i){
            dp[i] = min(dp[i], dp[i-length[j]]+price[j]);}
        else{
          dp[i] = min(dp[i],price[j]);}}
          cout<<dp[i]<<endl;
        }
}

int main()
{
  long long int t;
  cin>>t;
  while(t--)
  {
    long long int n;
    cin>>n;
    vector< pair<long long int,long long int > >a;

    vector<long long int> side;
    for(long long int i=0;i<n;i++)
    {
      long long int x,y;
      cin>>x>>y;
      a.push_back(make_pair(x,y));

    }
    long long int m;
    cin>>m;
    long long int price[m];
    long long int length[m];
    for(long long int  i=0;i<m;i++)
    {
      ans+=dp[i];
    }
long long int dist;
    for(long long int i=0;i<n-1;i++){
              dist=ceil(sqrt(pow(a[i].first-a[i+1].first,2)+pow(a[i].second-a[i+1].second,2)));
              side.push_back(dist);
          }
          dist=ceil(sqrt(pow(a[0].first-a[n-1].first,2)+pow(a[0].second-a[n-1].second,2)));
        side.push_back(dist);
    unboundedKnapsack(price,length,m);
    long long ans =0;
    for(long long int i=0;i<n;i++)
    {
      ans+= dp[side[i]];
    }
    cout<<ans<<endl;

  }
}
