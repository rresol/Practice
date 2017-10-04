#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long int n,k;
  cin>>n>>k;
  if(k==0)
  {
    cout<<0<<" "<<0<<endl;
    return 0;
  }
  if(k==n)
  {
    cout<<0<<" "<<0<<endl;
    return 0;
  }
  if(k<(n/2))
  {
    if(k<=(n/3))
      cout<<1<<" "<<(2*k)<<endl;
    else
      cout<<1<<" "<<(n-k)<<endl;
  }
  else{
    if(k==(n/2))
    {
      if((n%2)!=0)
      {
        cout<<1<<" "<<(k+1)<<endl;
      }
      else
      {
        cout<<1<<" "<<k<<endl;
      }
    }
    else{
      cout<<1<<" "<<(n-k)<<endl;
    }
  }
  return 0;
}
