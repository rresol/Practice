#include<iostream>
using namespace std;
int main()
{
  long long int t;
  cin>>t;
  while(t--)
  {
    long long int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(!a || !b || !c || !d)
    {
      cout<<"YES"<<endl;
    }
    else if(!(a+b) ||!(b+c)||!(c+d)||!(a+d)||!(a+c)||!(b+d))
      {
        cout<<"Yes\n";
      }
      else if(!(a+b+c) || !(b+c+d) ||!(a+c+d)||!(a+b+d))
      {
        cout<<"Yes\n";
      }
      else if(!(a+b+c+d)){
        cout<<"Yes\n";
      }
      else{
        cout<<"No\n"<<endl;
      }


  }
  return 0;
}
