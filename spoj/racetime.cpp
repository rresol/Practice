#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long n,q;
  cin>>n>>q;
  long long cow[n+1];
  vector<long long>ans(n+1);

  for(int i=1;i<=n;i++)
  {
    cin>>cow[i];
    ans[i] = cow[i];
  }
  long m = sqrt(n);
  for(int i=1;i<=n;i+=m)
  {
    sort(ans+i,ans+i+m);
  }
  while(q--)
  {
    string a;
    cin>>a;
    if(a[0]=='C')
    {
      int cou=0;
      long long p,q,x;
      cin>>p>>q>>x;
      
      cout<<cou<<endl;
    }
    else
    {
      long long i,x;
      cin>>i>>x;
      cow[i] = x;
    }
  }
}
