#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long a[100005];
long long b[100005];
int main()
{
  long long int n;
  cin>>n;
  long long int ans = INT_MIN;
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
    if(a[i]!=-1)
    {
      b[a[i]]++;
      ans = max(ans,b[a[i]]);
    }
  }
  cout<<ans<<endl;
  return 0;
}
