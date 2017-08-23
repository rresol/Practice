#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,q;
  cin>>n>>q;
  int B[n][n];
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      cin>>B[i][j];
    }
  }
  vector<int>ans;
  for(int i=0;i<n-2;i++)
  {
    int a = (B[i][i+1]-B[i+1][i+2]+B[i][i+2])/2;
    ans.push_back(a);
  }
  int k = ans[ans.size()-1];
  int c = k-B[n-3][n-2];
  int d = k-B[n-3][n-1];
  ans.push_back(c);
  ans.push_back(d);

  for(int i=0;i<ans.size();i++)
  {
    cout<<ans[i]<<endl;
  }
}
