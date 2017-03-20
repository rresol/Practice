#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  int n;
  cin>>n;
  int t;
  cin>>t;
  int a[n+1];
  memset(a,0,n+1);
  for(int i=1;i<n;i++)
  {
    int k;
    cin>>k;
    a[i] = i+k;
  }
  for(int i=1;i<n;i=a[i])
  {
    if(a[i]==t)
    {
      cout<<"YES\n";
      return 0;
    }

  }
  cout<<"NO\n";
  return 0;
}
