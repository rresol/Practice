#include<bits/stdc++.h>
using namespace std;
int primefactors(long long int n,long long int k)
{
  long long int count =0;
  long long int flag =0;

  while(n%2==0)
  {
      if(!flag)
      {
        flag =1;
        count++;
      }
      n/=2;
  }
  for(long long int i=3;i<sqrt(n);i+=2)
  {
    if(n%i==0)
    {
      count++;
    }
    while(n%i==0)
    {
      n = n/i;
    }
  }
  if(n>2)
  {
    count++;
  }
  return (count==k);
}

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    long long int a,b,k;
    cin>>a>>b>>k;
    long long int ans =0;
    for(long long int i=a;i<=b;i++)
    {
      if(primefactors(i,k))
      {
        ans++;
      }
    }
    cout<<ans<<endl;
  }
  return 0;
}
