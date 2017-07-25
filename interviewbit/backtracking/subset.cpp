#include<bits/stdc++.h>
using namespace std;
vector< vector<int> >ans;
vector<int>lis;

int a[100005];
void subset(int i, int n)
{
  if(i==n)return;
  lis.push_back(a[i]);
  ans.push_back(lis);
  for(int j=i+1;j<n;j++)
  {
    subset(j,n);
  }
  lis.pop_back();
}

int main()
{
  int n;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  for(int i=0;i<n;i++)
  {
    subset(i,n);
    lis.clear();
  }
  for(int i=0;i<ans.size();i++)
  {
    for(int j=0;j<ans[i].size();j++)
    {
      cout<<ans[i][j]<<" ";
    }
    cout<<endl;
  }
  return 0;
}
