#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  sort(a,a+n);
  int max_diff= max(a[n-1]-a[n-2],a[n-1]-a[n-3]);
  for(int i=n-2;i>=2;i--)
  {
    max_diff = max(max_diff,a[i]-a[i-2]);
  }
  cout<<max_diff<<endl;
  return 0;
}
