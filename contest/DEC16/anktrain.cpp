#include<iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    int res = n%8 ;
    if(res==1)
    {
      res = n+3;
      cout<<res<<"LB"<<endl;
    }
    else if(res==2)
    {
      res = n+3;
      cout<<res<<"MB"<<endl;
    }
    else if(res==3)
    {
      res = n+3;
      cout<<res<<"UB"<<endl;
    }
    else if(res==4)
    {
      res = n-3;
      cout<<res<<"LB"<<endl;
    }
    else if(res==5)
    {
      res = n-3;
      cout<<res<<"MB"<<endl;
    }
    else if(res==6)
    {
      res = n-3;
      cout<<res<<"UB"<<endl;
    }
    else if(res==7)
    {
      res = n+1;
      cout<<res<<"SU"<<endl;
    }
    else
    {
      res = n-1;
      cout<<res<<"SL"<<endl;
    }

  }
}
