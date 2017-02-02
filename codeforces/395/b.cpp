#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long n;
  cin>>n;
  long long a[n+1];
  for(int i=1;i<=n;i++)
  {
    cin>>a[i];
  }
  long long m = (n+1)/2;
  for(int i=1;i<=m;i++)
  {
    if((i%2)!=0)
    {
      swap(a[i],a[n-i+1]);
    }
  }
  for(int i=1;i<=n;i++)
  {
    cout<<a[i]<<" ";
  }
  return 0;
}
