#include<bits/stdc++.h>
using namespace std;
int solve(const vector<int> &A, const vector<int> &B, const vector<int> &C) {

    int max_cap  = 0;
    for(int i=0;i<A.size();i++)
        max_cap = max(max_cap,A[i]);

    //cout<<max_cap<<endl;
    int ans[max_cap+1];
    int n = B.size();
    for(int i=0;i<=max_cap;i++)
    {
        ans[i] = INT_MAX;
    }
    for(int i=0;i<=max_cap;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==0)
            {
                ans[i] = 0;
            }
            else
            {
                if(B[j]<=i)
                {

                    ans[i] = min(C[j]+ans[i-B[j]], ans[i]);
                }
            }

        }
    }
    int sum =0;
    // for(int i=0;i<=max_cap;i++)
    // {
    //   cout<<ans[i]<<endl;
    // }
    for(int i=0;i<n;i++)
    {
        sum += ans[A[i]];
    }
    return sum;
}

int main()
{
  int n,m;
  cin>>n>>m;
  vector<int>a(n);
  vector<int>b(m);
  vector<int>c(m);
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  for(int i=0;i<m;i++)
  {
    cin>>b[i];
  }
  for(int i=0;i<m;i++)
  {
    cin>>c[i];
  }
  cout<<solve(a,b,c);
}
