#include<iostream>
using namespace std;
int main()
{
  long long int n,a,b;
  cin>>n>>a>>b;
  b = 2*b;

  long long int ans = 0;
  for(int i=0;i<n;i++)
  {
    long long x;
    cin>>x;
    if(x==1)
    {
      if(a)
      {
        a--;
      }
      else if(b)
      {
        b--;
      }
      else{
        ans++;
      }
    }
    else{
      if(b>=2)
      {
        b-=2;
      }
      else{
        ans+=2;
      }
    }
  }
  cout<<ans<<endl;
  return 0;
}
