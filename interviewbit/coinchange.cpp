#include<bits/stdc++.h>
using namespace std;


int solve(vector<int> &A, int B) {
    int ans[B+1];
    sort(A.begin(),A.end());
    for(int i=0;i<=B;i++)
    {
        ans[i] =0;
    }
    ans[0] = 1;
    for(int i=1;i<=B;i++)
    {
        for(int j=0;j<A.size();j++)
        {
            if(A[j]<=i)
            {
                    ans[i] += ans[i-A[j]];
            }
        }

    }
    for(int i=0;i<=B;i++)
      cout<<ans[i]<<" ";
    return ans[B];
}




int main()
{
  int n;
  cin>>n;
  vector<int>a(n);
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  int k;
  cin>>k;
  solve(a,k);
}
