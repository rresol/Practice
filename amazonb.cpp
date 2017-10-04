#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a,b;
  cin>>a>>b;
  int k;
  cin>>k;
  int i=1;
  int ans;
  int m = a;
  int n = b;
  int a_index=1;
  int b_index =1;
  map<int,int>mp;
  while(i<=k)
  {
    if(a<b)
    {
      ans = a;
      a_index++;
      a=(a_index*m);
    }
    else{
      ans =b;
      b_index++;
      b=(b_index*n);
    }
    if(mp[ans])continue;
    mp[ans]++;
    //cout<<ans<<endl;
    i++;
  }
  cout<<ans<<endl;
  return 0;
}
