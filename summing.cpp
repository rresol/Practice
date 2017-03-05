#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
int main()
{
  int n,i;
  cin>>n;
  vector<long long>a(n);
  for(i=0;i<n;i++)
  {
    cin>>a[i];
  }
  int first = pow(2,n)-1;
  cout<<first<<endl;
  long long ans = ((first%MOD)*(a[0]%MOD))%MOD;
  ans += first;
  ans%=MOD;
  int y = n-2;
  for(i=1;i<=(n)/2;i++)
  {
    int x =  pow(2,y-i+1) - pow(2,i-1);
    int ans1;
    first  = first+x;
    cout<<first<<endl;
    ans1 = ( ((first%MOD)*(a[i]%MOD))%MOD)%MOD;
    ans = (ans +((2*ans1)%MOD))%MOD;


  }
  cout<<ans<<endl;
}
