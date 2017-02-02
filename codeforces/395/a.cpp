#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,m,z;
  cin>>n>>m>>z;
  string a(z+1,'0');
  string b(z+1,'0');
  for(int i=1;i<=z;i++)
  {
    if(i%n==0)
    {
      a[i] ='1';
    }
  }
  for(int i=1;i<=z;i++)
  {
    if(i%m==0)
    {
      b[i] ='1';
    }
  }
  int ans =0;
  for(int i=1;i<=z;i++)
  {
    if(a[i]=='1' && b[i]=='1')
    {
      ans++;
    }
  }
  cout<<ans<<endl;
}
