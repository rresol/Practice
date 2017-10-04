#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,k,t;
  cin>>n>>k>>t;
  int rem = t;
  if(t>k)
  {
    rem = k;
  }
  if(t>n)
  {
    t = t-n;
    rem = k-t;
  }
  cout<<rem<<endl;
  return 0;
}
