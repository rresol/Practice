#include<bits/stdc++.h>
using namespace std;
int unboundedKnapsack(int W, int n, int val[], int wt[])
{
    // dp[i] is going to store maximum value
    // with knapsack capacity i.
    int dp[W+1];
    memset(dp, 0, sizeof dp);

    int ans = 0;

    // Fill dp[] using above recursive formula
    for (int i=0; i<=W; i++)
      for (int j=0; j<n; j++)
         if (wt[j] <= i)
            dp[i] = max(dp[i], dp[i-wt[j]]+val[j]);

    return dp[W];
}
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,m;
    cin>>n>>m;
    vector<int>a(n);
    vector<int>b(m);
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
    }
    for(int i=0;i<m;i++)
      cin>>b[i];
    set< int >c (a.begin(),a.end());
    c.insert(b.begin(),b.end());
    int len = c.size();
    c.clear();
    cout<<(n+m-len)<<endl;

  }
}
