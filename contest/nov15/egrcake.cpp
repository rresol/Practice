#include<iostream>
#include<cstdlib>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    long long int n,m,gcd;
    cin>>n>>m;
    int a[n+1];
    //memset(a,0,sizeof a);
    int count =0;
    int k =  m+1;


    for(long i=1; i <= n && i <= m; ++i)
    {
        // Checks if i is factor of both integers
        if(n%i==0 && m%i==0)
            gcd = i;
    }


    if(gcd==1)
    {
      cout<<"Yes"<<endl;
    }
    else
    {
      cout<<"No"<<" "<<n-(n/gcd)<<endl;
    }
  }
  return 0;
}
